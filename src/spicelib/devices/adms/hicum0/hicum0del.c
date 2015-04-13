/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:40 ***/


#include "ngspice/ngspice.h"
#include "hicum0defs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum0delete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance **fast =(hicum0instance**)inInst;
  
  hicum0instance **prev = NULL;
  hicum0instance *here;
  
  for ( ; model ; model = model->hicum0nextModel ) {
      prev = &(model->hicum0instances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->hicum0name == name || (fast && here==*fast) ) {
	      *prev = here->hicum0nextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
