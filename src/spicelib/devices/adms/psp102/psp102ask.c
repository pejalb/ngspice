/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:14 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/cktdefs.h"
#include "psp102defs.h"
#include "ngspice/ifsim.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int psp102ask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  psp102instance *instance = (psp102instance*)inst;
  NG_IGNOREABLE(ckt);
  NG_IGNOREABLE(value);
  NG_IGNOREABLE(select);
  NG_IGNOREABLE(instance);
  switch (which) {  case  psp102_instance_L  :
    value->rValue = instance->L;
    return OK;
  case  psp102_instance_W  :
    value->rValue = instance->W;
    return OK;
  case  psp102_instance_SA  :
    value->rValue = instance->SA;
    return OK;
  case  psp102_instance_SB  :
    value->rValue = instance->SB;
    return OK;
  case  psp102_instance_ABSOURCE  :
    value->rValue = instance->ABSOURCE;
    return OK;
  case  psp102_instance_LSSOURCE  :
    value->rValue = instance->LSSOURCE;
    return OK;
  case  psp102_instance_LGSOURCE  :
    value->rValue = instance->LGSOURCE;
    return OK;
  case  psp102_instance_ABDRAIN  :
    value->rValue = instance->ABDRAIN;
    return OK;
  case  psp102_instance_LSDRAIN  :
    value->rValue = instance->LSDRAIN;
    return OK;
  case  psp102_instance_LGDRAIN  :
    value->rValue = instance->LGDRAIN;
    return OK;
  case  psp102_instance_AS  :
    value->rValue = instance->AS;
    return OK;
  case  psp102_instance_PS  :
    value->rValue = instance->PS;
    return OK;
  case  psp102_instance_AD  :
    value->rValue = instance->AD;
    return OK;
  case  psp102_instance_PD  :
    value->rValue = instance->PD;
    return OK;
  case  psp102_instance_MULT  :
    value->rValue = instance->MULT;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
