/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:40 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/cktdefs.h"
#include "hicum0defs.h"
#include "ngspice/ifsim.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum0ask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  hicum0instance *instance = (hicum0instance*)inst;
  NG_IGNOREABLE(ckt);
  NG_IGNOREABLE(value);
  NG_IGNOREABLE(select);
  NG_IGNOREABLE(instance);
  switch (which) {  case  hicum0_instance_dt  :
    value->rValue = instance->dt;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
