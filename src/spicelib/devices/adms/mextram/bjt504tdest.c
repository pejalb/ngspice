/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "bjt504tdefs.h"
#include "ngspice/suffix.h"

void bjt504tdestroy(GENmodel **inModel)

{
  register bjt504tmodel **model = (bjt504tmodel**)inModel;
  register bjt504tinstance *here;
  bjt504tinstance *prev = NULL;
  bjt504tmodel *mod = *model;
  bjt504tmodel *oldmod = NULL;
  
  for ( ; mod ; mod = mod->bjt504tnextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (bjt504tinstance *)NULL;  
      for (here = mod->bjt504tinstances; here ; here = here->bjt504tnextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
