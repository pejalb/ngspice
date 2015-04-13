/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:40 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/ifsim.h"
#include "hicum0defs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum0par(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  hicum0instance *myinstance = (hicum0instance*)inst;
  NG_IGNOREABLE(value);
  NG_IGNOREABLE(select);
  NG_IGNOREABLE(myinstance);
  switch (param) {  case  hicum0_instance_dt  :
    myinstance->dt = value->rValue;
    myinstance->dt_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
