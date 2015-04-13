/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "ngspice/cktdefs.h"
#include "ngspice/smpdefs.h"
#include "bjt504tdefs.h"
#include "ngspice/const.h"
#include "ngspice/sperror.h"
#include "ngspice/ifsim.h"
#include "ngspice/suffix.h"

#define _STATIC
#define _DYNAMIC

int bjt504ttemp(GENmodel *inModel, CKTcircuit *ckt)
{
  register bjt504tmodel *model = (bjt504tmodel*)inModel;
  register bjt504tinstance *here;
  NG_IGNOREABLE(ckt);
  for ( ; model != NULL; model = model->bjt504tnextModel )
  {

    /* loop through all the instances of the model */
    for (here = model->bjt504tinstances; here != NULL ; here = here->bjt504tnextInstance)
    {

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
