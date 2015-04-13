/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:40 ***/


#include "ngspice/ngspice.h"
#include "ngspice/cktdefs.h"
#include "ngspice/smpdefs.h"
#include "hicum0defs.h"
#include "ngspice/const.h"
#include "ngspice/sperror.h"
#include "ngspice/ifsim.h"
#include "ngspice/suffix.h"

#define _STATIC
#define _DYNAMIC

int hicum0temp(GENmodel *inModel, CKTcircuit *ckt)
{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance *here;
  NG_IGNOREABLE(ckt);
  for ( ; model != NULL; model = model->hicum0nextModel )
  {
{
if
(model->npn_Given)
{
model->HICUMtype=(+1);
EXIT_IF_ISNAN(model->HICUMtype)
}
else
{
if
(model->pnp_Given)
{
model->HICUMtype=(-1);
EXIT_IF_ISNAN(model->HICUMtype)
}
else
{
model->HICUMtype=(+1);
EXIT_IF_ISNAN(model->HICUMtype)
}
}
}

    /* loop through all the instances of the model */
    for (here = model->hicum0instances; here != NULL ; here = here->hicum0nextInstance)
    {

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
