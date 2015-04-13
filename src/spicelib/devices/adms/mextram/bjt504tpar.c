/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/ifsim.h"
#include "bjt504tdefs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int bjt504tpar(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  bjt504tinstance *myinstance = (bjt504tinstance*)inst;
  NG_IGNOREABLE(value);
  NG_IGNOREABLE(select);
  NG_IGNOREABLE(myinstance);
  switch (param) {
  default:
    return(-1);
  }
  return(OK);
}
