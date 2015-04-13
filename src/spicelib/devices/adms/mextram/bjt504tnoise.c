/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "bjt504tdefs.h"
#include "ngspice/cktdefs.h"
#include "ngspice/iferrmsg.h"
#include "ngspice/noisedef.h"
#include "ngspice/suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* bjt504tnNames []= {"","","","","","","","","","","","","","","","","","","","","","","","","","",""
};

int
bjt504tnoise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  bjt504tmodel *firstModel = (bjt504tmodel *) genmodel;
  bjt504tmodel *model;
  bjt504tinstance *inst;
  for (model=firstModel; model != NULL; model=model->bjt504tnextModel)
  {
    for (inst=model->bjt504tinstances; inst != NULL; inst=inst->bjt504tnextInstance)
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