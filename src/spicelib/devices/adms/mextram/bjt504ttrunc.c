/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "ngspice/cktdefs.h"
#include "bjt504tdefs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int bjt504ttrunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register bjt504tmodel *model = (bjt504tmodel*)inModel;
  register bjt504tinstance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->bjt504tnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->bjt504tinstances; here != NULL ; here = here->bjt504tnextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
            CKTterr(here->state_b_c1, ckt, timeStep);
            CKTterr(here->state_b_c4, ckt, timeStep);
            CKTterr(here->state_b1_c1, ckt, timeStep);
            CKTterr(here->state_b1_c4, ckt, timeStep);
            CKTterr(here->state_b_c3, ckt, timeStep);
            CKTterr(here->state_b_c, ckt, timeStep);
            CKTterr(here->state_b_e, ckt, timeStep);
            CKTterr(here->state_dt_GND, ckt, timeStep);
            CKTterr(here->state_b2_c2, ckt, timeStep);
            CKTterr(here->state_b1_b2, ckt, timeStep);
            CKTterr(here->state_s_c1, ckt, timeStep);
            CKTterr(here->state_b2_e1, ckt, timeStep);
            CKTterr(here->state_b1_e1, ckt, timeStep);
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->bjt504tname,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
