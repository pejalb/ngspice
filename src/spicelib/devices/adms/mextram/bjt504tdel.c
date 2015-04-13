/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "bjt504tdefs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int bjt504tdelete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register bjt504tmodel *model = (bjt504tmodel*)inModel;
  register bjt504tinstance **fast =(bjt504tinstance**)inInst;
  
  bjt504tinstance **prev = NULL;
  bjt504tinstance *here;
  
  for ( ; model ; model = model->bjt504tnextModel ) {
      prev = &(model->bjt504tinstances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->bjt504tname == name || (fast && here==*fast) ) {
	      *prev = here->bjt504tnextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
