/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:45 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/cktdefs.h"
#include "hicum2defs.h"
#include "ngspice/ifsim.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum2ask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  hicum2instance *instance = (hicum2instance*)inst;
  NG_IGNOREABLE(ckt);
  NG_IGNOREABLE(value);
  NG_IGNOREABLE(select);
  NG_IGNOREABLE(instance);
  switch (which) {
  default:
    return(-1);
  }
  return(-1);
}
