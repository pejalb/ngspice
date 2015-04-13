/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:14 ***/


#include "ngspice/ngspice.h"
#include "psp102defs.h"
#include "ngspice/cktdefs.h"
#include "ngspice/iferrmsg.h"
#include "ngspice/noisedef.h"
#include "ngspice/suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* psp102nNames []= {"","","","","","","","",""
};

int
psp102noise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  psp102model *firstModel = (psp102model *) genmodel;
  psp102model *model;
  psp102instance *inst;
  for (model=firstModel; model != NULL; model=model->psp102nextModel)
  {
    for (inst=model->psp102instances; inst != NULL; inst=inst->psp102nextInstance)
    {
      switch (operation)
      {
        case N_OPEN:
          break;
        case N_CALC:
          switch (mode)
          {
            case N_DENS:
              break;
            case INT_NOIZ:
              break;
          }
          break;
        case N_CLOSE:
          return (OK);
          break;
      }
    }
  }
  return(OK);
}