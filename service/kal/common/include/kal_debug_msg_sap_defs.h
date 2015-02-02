#ifdef _DEBUG_MSG_SAP_

#include "kal_public_defs.h"
#include "module_msg_range.h"

#undef MODULE_MSG_BEGIN
#undef MODULE_MSG_END
#define MODULE_MSG_BEGIN(BEGIN_POS)
#define MODULE_MSG_END(END_POS)

/***************************************************************
*  if add _msgid.h or _sap.h file, should include the _msgid.h or _sap.h in :                *
*    kal_debug_msg_sap_defs.h & libParseDbModem.c & srcParseDbModem.c          *
****************************************************************/
typedef enum {
	#include "sysservice_msgid.h"	
    #include "cc_msgid.h"	
    #include "ciss_msgid.h"	
	#include "mm_msgid.h"	
    #include "sms_msgid.h"	
	#include "sim_public_msgid.h"	    
    #include "sim_ps_msgid.h"
    #include "ps_public_l4_msgid.h"	
    #include "l4_msgid.h" 
    #include "rr_msgid.h"
    #include "llc_msgid.h"    
    #include "p2p_msgid.h"     
    #include "sndcp_msgid.h"   
    #include "sm_msgid.h"    
    #include "data_msgid.h"
    #include "ps_public_vt_msgid.h"    
    #include "VT_msgid.h"    
    #include "nvram_msgid.h"      
    #include "l1_msgid.h"    
    #include "hal_l1_msgid.h"    
    #include "l1hisr_msgid.h"     
    #include "ft_msgid.h"   
    #include "tst_msgid.h"    
    #include "audio_msgid.h"    
    #include "ratcm_msgid.h"    
    #include "ratdm_msgid.h"    
    #include "urr_msgid.h"    
    #include "ul2_msgid.h" 
    #include "ul2d_msgid.h"  
    #include "uas_gas_msgid.h"     
    #include "uas_gas_gemini_msgid.h"	
    #include "ul1_msgid.h"    
    #include "ul1data_msgid.h"     
    #include "ul1hisr_msgid.h"   
    #include "ul1c_msgid.h"    
    #include "ll1_msgid.h"     
    #include "ul1tst_msgid.h"     
    #include "ulcs_msgid.h"    
    #include "gps_msgid.h"    
    #include "tl1_msgid.h"    
    #include "tl1data_ast_msgid.h"      
    #include "tl1hisr_ast_msgid.h"     
    #include "tl1fta_ast_msgid.h"   
    #include "rsva_msgid.h"
    #include "ndis_msgid.h"     
    #include "ps_public_ups_msgid.h"    
    #include "ups_msgid.h"     
    #include "ps_public_supl_msgid.h"      
    #include "supl_msgid.h"     
    #include "cmux_msgid.h"     
    #include "ppp_msgid.h"	
    #include "ext_modem_msgid.h"	
    #include "wmt_msgid.h"
	#include "em_msgid.h"    
    #include "fs_msgid.h"         
    #include "med_msgid.h"    
    #include "dps_msgid.h"   
    #include "udps_msgid.h"
    #include "drv_msgid.h"    
    #include "meut_msgid.h"	
    #include "l1_ext_msgid.h"	
    #include "haplus_msgid.h"
} MSG_TYPE_DEBUG;

#include "sap_range.h"

#undef MODULE_SAP_BEGIN
#undef MODULE_SAP_END
#define MODULE_SAP_BEGIN(BEGIN_POS)
#define MODULE_SAP_END(END_POS)

typedef enum {	
	#include "svc_sap.h"	
	#include "md_sap.h"	
	#include "md_svc_sap.h"	
	#include "md_drv_sap.h"	
	#include "md_mmi_sap.h"	
	#include "md_mw_sap.h"	
	#include "mw_sap.h"	
	#include "drv_sap.h"	
}SAP_TYPE_DEBUG;

typedef struct ilm_struct_debug {
   kal_uint16       src_mod_id;       
   kal_uint16       dest_mod_id;      
   SAP_TYPE_DEBUG    sap_id;           
   MSG_TYPE_DEBUG    msg_id;           
   local_para_struct *local_para_ptr;  
   peer_buff_struct  *peer_buff_ptr;   
} ilm_struct_debug;
void dummyDebugInitForMsgSap(void);

#endif  //_DEBUG_MSG_SAP_

