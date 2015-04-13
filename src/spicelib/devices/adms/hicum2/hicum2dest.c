/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:45 ***/


#include "ngspice/ngspice.h"
#include "hicum2defs.h"
#include "ngspice/suffix.h"

void hicum2destroy(GENmodel **inModel)

{
  register hicum2model **model = (hicum2model**)inModel;
  register hicum2instance *here;
  hicum2instance *prev = NULL;
  hicum2model *mod = *model;
  hicum2model *oldmod = NULL;
  
  for ( ; mod ; mod = mod->hicum2nextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (hicum2instance *)NULL;  
      for (here = mod->hicum2instances; here ; here = here->hicum2nextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
