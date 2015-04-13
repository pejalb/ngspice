/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:45 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/ifsim.h"
#include "hicum2defs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum2par(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  hicum2instance *myinstance = (hicum2instance*)inst;
  NG_IGNOREABLE(value);
  NG_IGNOREABLE(select);
  NG_IGNOREABLE(myinstance);
  switch (param) {
  default:
    return(-1);
  }
  return(OK);
}
