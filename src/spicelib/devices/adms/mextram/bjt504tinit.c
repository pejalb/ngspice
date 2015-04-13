/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/

#include "ngspice/config.h"

#include "ngspice/devdefs.h"


#include "bjt504titf.h"
#include "bjt504text.h"
#include "bjt504tinit.h"

SPICEdev bjt504tinfo = {
  {   "bjt504t",
      "bjt504t created by adms",
      &bjt504tnSize,
      &bjt504tnSize,
      bjt504tnames,
      &bjt504tpTSize,
      bjt504tpTable,
      &bjt504tmPTSize,
      bjt504tmPTable,
#ifdef XSPICE
/*----  Fixed by SDB 5.2.2003 to enable XSPICE/tclspice integration  -----*/
        NULL,  /* This is a SPICE device, it has no MIF info data */

        0,     /* This is a SPICE device, it has no MIF info data */
        NULL,  /* This is a SPICE device, it has no MIF info data */

        0,     /* This is a SPICE device, it has no MIF info data */
        NULL,  /* This is a SPICE device, it has no MIF info data */

        0,     /* This is a SPICE device, it has no MIF info data */
        NULL,  /* This is a SPICE device, it has no MIF info data */
/*---------------------------  End of SDB fix   -------------------------*/
#endif
      DEV_DEFAULT
  },

    bjt504tpar,    /* DEVparam       */
    bjt504tmParam,   /* DEVmodParam    */
    bjt504tload,     /* DEVload        */
    bjt504tsetup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    bjt504tsetup,    /* DEVpzSetup     */
    bjt504ttemp,     /* DEVtemperature */
    bjt504ttrunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    bjt504tacLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    bjt504tdestroy,  /* DEVdestroy     */
    bjt504tmDelete,  /* DEVmodDelete   */
    bjt504tdelete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    bjt504task,      /* DEVask         */
    bjt504tmAsk,     /* DEVmodAsk      */
    bjt504tpzLoad,   /* DEVpzLoad      */
    NULL, /* DEVconvTest    */
    NULL,         /* DEVsenSetup    */
    NULL,         /* DEVsenLoad     */
    NULL,         /* DEVsenUpdate   */
    NULL,         /* DEVsenAcLoad   */
    NULL,         /* DEVsenPrint    */
    NULL,         /* DEVsenTrunc    */
    NULL,         /* DEVdisto       */
    NULL,         /* DEVnoise       */
    NULL,         /* DEVsoaCheck    */
#ifdef CIDER
    NULL,         /* DEVdump       */
    NULL,         /* DEVacct       */
#endif                                                         
    &bjt504tiSize,   /* DEVinstSize    */
    &bjt504tmSize    /* DEVmodSize     */

};

SPICEdev *
get_bjt504t_info(void)
{
    return &bjt504tinfo;
}
