/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1987 Gary W. Ng
Modified: 2000 AlansFixes
**********/

#include "ngspice.h"
#include "cntdefs.h"
#include "cktdefs.h"
#include "iferrmsg.h"
#include "noisedef.h"
#include "suffix.h"

/*
 * CNTnoise (mode, operation, firstModel, ckt, data, OnDens)
 *    This routine names and evaluates all of the noise sources
 *    associated with CNTFET's.  It starts with the model *firstModel and
 *    traverses all of its insts.  It then proceeds to any other models
 *    on the linked list.  The total output noise density generated by
 *    all of the CNTFET's is summed with the variable "OnDens".
 */

extern void   NevalSrc();
extern double Nintegrate();

int
CNTnoise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt,
           Ndata *data, double *OnDens)
{
    CNTmodel *firstModel = (CNTmodel *) genmodel;
    CNTmodel *model;
    CNTinstance *inst;
    char name[N_MXVLNTH];
    double coxSquared;
    double tempOnoise;
    double tempInoise;
    double noizDens[CNTNSRCS];
    double lnNdens[CNTNSRCS];
    int i;

    /* define the names of the noise sources */

    static char *CNTnNames[CNTNSRCS] = {       /* Note that we have to keep the order */
	"_rd",              /* noise due to rd */        /* consistent with thestrchr definitions */
	"_rs",              /* noise due to rs */        /* in CNTdefs.h */
	"_id",              /* noise due to id */
	"_1overf",          /* flicker (1/f) noise */
	""                  /* total transistor noise */
    };

    for (model=firstModel; model != NULL; model=model->CNTnextModel) {

	/* Oxide capacitance can be zero in CNT.  Since this will give us problems in our 1/f */
	/* noise model, we ASSUME an actual "tox" of 1e-7 */

	if (model->CNToxideCapFactor == 0.0) {
	    coxSquared = 3.9 * 8.854214871e-12 / 1e-7;
        } else {
	    coxSquared = model->CNToxideCapFactor;
        }
	coxSquared *= coxSquared;
	for (inst=model->CNTinstances; inst != NULL; inst=inst->CNTnextInstance) {
	    if (inst->CNTowner != ARCHme) continue;
        
	    switch (operation) {

	    case N_OPEN:

		/* see if we have to to produce a summary report */
		/* if so, name all the noise generators */

		if (((NOISEAN*)ckt->CKTcurJob)->NStpsSm != 0) {
		    switch (mode) {

		    case N_DENS:
			for (i=0; i < CNTNSRCS; i++) {
			    (void)sprintf(name,"onoise_%s%s",inst->CNTname,CNTnNames[i]);

data->namelist = (IFuid *)trealloc((char *)data->namelist,(data->numPlots + 1)*sizeof(IFuid));
if (!data->namelist) return(E_NOMEM);
		(*(SPfrontEnd->IFnewUid))(ckt,
			&(data->namelist[data->numPlots++]),
			(IFuid)NULL,name,UID_OTHER,(void **)NULL);
				/* we've added one more plot */


			}
			break;

		    case INT_NOIZ:
			for (i=0; i < CNTNSRCS; i++) {
			    (void)sprintf(name,"onoise_total_%s%s",inst->CNTname,CNTnNames[i]);


data->namelist = (IFuid *)trealloc((char *)data->namelist,(data->numPlots + 1)*sizeof(IFuid));
if (!data->namelist) return(E_NOMEM);
		(*(SPfrontEnd->IFnewUid))(ckt,
			&(data->namelist[data->numPlots++]),
			(IFuid)NULL,name,UID_OTHER,(void **)NULL);
				/* we've added one more plot */


			    (void)sprintf(name,"inoise_total_%s%s",inst->CNTname,CNTnNames[i]);


data->namelist = (IFuid *)trealloc((char *)data->namelist,(data->numPlots + 1)*sizeof(IFuid));
if (!data->namelist) return(E_NOMEM);
		(*(SPfrontEnd->IFnewUid))(ckt,
			&(data->namelist[data->numPlots++]),
			(IFuid)NULL,name,UID_OTHER,(void **)NULL);
				/* we've added one more plot */


			}
			break;
		    }
		}
		break;

	    case N_CALC:
		switch (mode) {

		case N_DENS:
		    NevalSrc(&noizDens[CNTRDNOIZ],&lnNdens[CNTRDNOIZ],
				 ckt,THERMNOISE,inst->CNTdNodePrime,inst->CNTdNode,
				 inst->CNTdrainConductance);

		    NevalSrc(&noizDens[CNTRSNOIZ],&lnNdens[CNTRSNOIZ],
				 ckt,THERMNOISE,inst->CNTsNodePrime,inst->CNTsNode,
				 inst->CNTsourceConductance);

		    NevalSrc(&noizDens[CNTIDNOIZ],&lnNdens[CNTIDNOIZ],
				 ckt,THERMNOISE,inst->CNTdNodePrime,inst->CNTsNodePrime,
                                 (2.0/3.0 * fabs(inst->CNTgm)));

		    NevalSrc(&noizDens[CNTFLNOIZ],(double*)NULL,ckt,
				 N_GAIN,inst->CNTdNodePrime, inst->CNTsNodePrime,
				 (double)0.0);
		    noizDens[CNTFLNOIZ] *= model->CNTfNcoef * 
				 exp(model->CNTfNexp *
				 log(MAX(fabs(inst->CNTcd),N_MINLOG))) /
				 (data->freq * inst->CNTw * 
				 inst->CNTm *
				 (inst->CNTl - 2*model->CNTlatDiff) * coxSquared);
		    lnNdens[CNTFLNOIZ] = 
				 log(MAX(noizDens[CNTFLNOIZ],N_MINLOG));

		    noizDens[CNTTOTNOIZ] = noizDens[CNTRDNOIZ] +
						     noizDens[CNTRSNOIZ] +
						     noizDens[CNTIDNOIZ] +
						     noizDens[CNTFLNOIZ];
		    lnNdens[CNTTOTNOIZ] = 
				 log(MAX(noizDens[CNTTOTNOIZ], N_MINLOG));

		    *OnDens += noizDens[CNTTOTNOIZ];

		    if (data->delFreq == 0.0) { 

			/* if we haven't done any previous integration, we need to */
			/* initialize our "history" variables                      */

			for (i=0; i < CNTNSRCS; i++) {
			    inst->CNTnVar[LNLSTDENS][i] = lnNdens[i];
			}

			/* clear out our integration variables if it's the first pass */

			if (data->freq == ((NOISEAN*)ckt->CKTcurJob)->NstartFreq) {
			    for (i=0; i < CNTNSRCS; i++) {
				inst->CNTnVar[OUTNOIZ][i] = 0.0;
				inst->CNTnVar[INNOIZ][i] = 0.0;
			    }
			}
		    } else {   /* data->delFreq != 0.0 (we have to integrate) */
			for (i=0; i < CNTNSRCS; i++) {
			    if (i != CNTTOTNOIZ) {
				tempOnoise = Nintegrate(noizDens[i], lnNdens[i],
				      inst->CNTnVar[LNLSTDENS][i], data);
				tempInoise = Nintegrate(noizDens[i] * data->GainSqInv ,
				      lnNdens[i] + data->lnGainInv,
				      inst->CNTnVar[LNLSTDENS][i] + data->lnGainInv,
				      data);
				inst->CNTnVar[LNLSTDENS][i] = lnNdens[i];
				data->outNoiz += tempOnoise;
				data->inNoise += tempInoise;
				if (((NOISEAN*)ckt->CKTcurJob)->NStpsSm != 0) {
				    inst->CNTnVar[OUTNOIZ][i] += tempOnoise;
				    inst->CNTnVar[OUTNOIZ][CNTTOTNOIZ] += tempOnoise;
				    inst->CNTnVar[INNOIZ][i] += tempInoise;
				    inst->CNTnVar[INNOIZ][CNTTOTNOIZ] += tempInoise;
                                }
			    }
			}
		    }
		    if (data->prtSummary) {
			for (i=0; i < CNTNSRCS; i++) {     /* print a summary report */
			    data->outpVector[data->outNumber++] = noizDens[i];
			}
		    }
		    break;

		case INT_NOIZ:        /* already calculated, just output */
		    if (((NOISEAN*)ckt->CKTcurJob)->NStpsSm != 0) {
			for (i=0; i < CNTNSRCS; i++) {
			    data->outpVector[data->outNumber++] = inst->CNTnVar[OUTNOIZ][i];
			    data->outpVector[data->outNumber++] = inst->CNTnVar[INNOIZ][i];
			}
		    }    /* if */
		    break;
		}    /* switch (mode) */
		break;

	    case N_CLOSE:
		return (OK);         /* do nothing, the main calling routine will close */
		break;               /* the plots */
	    }    /* switch (operation) */
	}    /* for inst */
    }    /* for model */

return(OK);
}
