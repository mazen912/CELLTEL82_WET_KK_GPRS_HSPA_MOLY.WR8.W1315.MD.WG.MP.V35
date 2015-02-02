/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2009
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   tl1data_sap.h
 *
 * Project:
 * --------------------------------------------------------
 *   
 *
 * Description:
 * --------------------------------------------------------
 *   
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 05 30 2013 ast00033
 * [MOLY00024285] [MT6572][CMCC Case  FT][LCA_GEMINI][Beijing][Regression-7th time][C6.3 卡槽1双PDP和卡槽2语音并发 ]8th_11:38:34_暂时无法接通_三元西桥
 * .
 *
 * 04 02 2013 ast00029
 * [MOLY00013377] [TDD128][ESL][MOLY]check-in ESL code.
 * for cr:MOLY00013377,  ESL modification
 *
 * 01 24 2013 shun.liu
 * [MOLY00009303] MT6572/6582: RF TX test feature check in
 * RF TX test feature tl1 part
 *
 * 01 07 2013 xiaoyun.mao
 * [MOLY00008419] [EE][CMCC case][FT][MT6589+GEMINI][Nanjing][1 round][2.1][M]_第81条_16:23:39_B手机红屏_Externel (EE),0,0,99,/data/core/,1,modem,md2
 * .
 *
 * 01 05 2013 shouzhu.zhang
 * [MOLY00008352] [Check In][MT6572] Check in 6572 related TL1 code to WR8
 * Check in TL1 MT6572 Code to WR8.
 * 
 * 09 11 2012 xiaoyun.mao
 * [MOLY00002766]   remove __UMAC_DCH_LISR__
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 03 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 03 09 2012 shouzhu.zhang
 * removed!
 * .
 *
 * 02 24 2012 shouzhu.zhang
 * removed!
 * Check in TL1 Sniffer code to MAUI.
 *
 * 12 26 2011 shuyang.yin
 * removed!
 * .
 *
 * 11 14 2011 shi.dong
 * removed!
 * TL1 code interface fta merge in MAUI.
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Rename the msg code begin from UL1 to TL1
 *
 * removed!
 * removed!
 * Rename __UMTS_TDD128_RAT__ to __UMTS_TDD128_MODE__
 *
 * removed!
 * removed!
 * add log section for tl1interface header files
 *
*******************************************************************************/
#include "module_msg_range.h"

#ifndef _TL1DATA_MSG_H
#define _TL1DATA_MSG_H

/* LISR -> TASK */

#ifdef __BUILD_DOM__
enum{
#endif

MODULE_MSG_BEGIN( MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN )
MSG_ID_TL1DATA_AST_RESET_CNF = MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN,

//RF Calibration begin
MSG_ID_TL1DATA_AST_RFCAL_RESET_CNF,
MSG_ID_TL1DATA_AST_RFCAL_CS_IND,
MSG_ID_TL1DATA_AST_RFCAL_ABBREG_IND,
MSG_ID_TL1DATA_AST_FHC_FINISH_IND,
MSG_ID_TL1DATA_AST_OTCAL_IND,
//RF Calibration end
MSG_ID_TL1DATA_AST_SET_ACTIVE_RAT_CNF,
//Suspend mode related msg begin
MSG_ID_TL1DATA_AST_SUSPEND_DONE_IND,
MSG_ID_TL1DATA_AST_RESUME_DONE_IND,
MSG_ID_TL1DATA_AST_GAP_SYNC_SUSPEND_IND,
MSG_ID_TL1DATA_AST_RF_SUSPEND_IND,
MSG_ID_TL1DATA_AST_RAT_SUSPEND_IND,
MSG_ID_TL1DATA_AST_CONTAINER_SUSPEND_IND,
MSG_ID_TL1DATA_AST_FS_SUSPEND_IND,
#ifdef __UMTS_TDD128_SNIFFER__
MSG_ID_TL1DATA_AST_SNIFFER_SUSPEND_IND,
#endif
MSG_ID_TL1DATA_AST_BCH_SUSPEND_IND,
MSG_ID_TL1DATA_AST_PCH_SUSPEND_IND,
MSG_ID_TL1DATA_AST_MEAS_SUSPEND_IND,
MSG_ID_TL1DATA_AST_BCH_CS_SUSPEND_IND,
//Suspend mode related msg end
MSG_ID_TL1DATA_AST_FREQUENCY_SCAN_IND,
MSG_ID_TL1DATA_AST_FREQUENCY_SCAN_SUSPEND_IND,
MSG_ID_TL1DATA_AST_CELL_SEARCH_IND,

// Sniffer begin
#ifdef __UMTS_TDD128_SNIFFER__
MSG_ID_TL1DATA_AST_SNIFFER_TIMEOUT_IND,
MSG_ID_TL1DATA_AST_SNIFFER_SETUP_IND,
MSG_ID_TL1DATA_AST_SNIFFER_NO_SIGNAL_IND,
MSG_ID_TL1DATA_AST_SNIFFER_SIGNAL_IND,
MSG_ID_TL1DATA_AST_SNIFFER_RELEASE_IND,
#endif
// Sniffer end

MSG_ID_TL1DATA_AST_SPECIFIC_CELL_SEARCH_IND,
MSG_ID_TL1DATA_AST_SPECIFIC_CELL_SEARCH_STOP_IND,

MSG_ID_TL1DATA_AST_MSG_CONTAINER_IND,
MSG_ID_TL1DATA_AST_ABORT_CNF,

MSG_ID_TL1DATA_AST_BCH_SETUP_IND,
MSG_ID_TL1DATA_AST_BCH_RELEASE_IND,
MSG_ID_TL1DATA_AST_SFN_IND,
MSG_ID_TL1DATA_AST_BCH_CS_IND,
MSG_ID_TL1DATA_AST_BCH_CS_SETUP_IND,

MSG_ID_TL1DATA_AST_PCH_SETUP_IND,                  
MSG_ID_TL1DATA_AST_PCH_RELEASE_IND,    

MSG_ID_TL1DATA_AST_FACH_SETUP_IND,                  
MSG_ID_TL1DATA_AST_FACH_RELEASE_IND,

MSG_ID_TL1DATA_AST_RACH_SETUP_IND,                  
MSG_ID_TL1DATA_AST_RACH_RELEASE_IND,   


MSG_ID_TL1DATA_AST_POST_TX_IND,
MSG_ID_TL1DATA_AST_ACCESS_IND,


MSG_ID_TL1DATA_AST_UL_DCH_SETUP_IND,
MSG_ID_TL1DATA_AST_UL_DCH_RELEASE_IND,

MSG_ID_TL1DATA_AST_DL_DCH_SETUP_IND,
MSG_ID_TL1DATA_AST_DL_DCH_RELEASE_IND,


MSG_ID_TL1DATA_AST_TX_STATUS_IND,
MSG_ID_TL1DATA_AST_T312_EXPIRY_IND,
MSG_ID_TL1DATA_AST_DL_INIT_SYNC_IND,
MSG_ID_TL1DATA_AST_RL_FAILURE_IND,


MSG_ID_TL1DATA_AST_HSDSCH_SETUP_IND,
MSG_ID_TL1DATA_AST_HSDSCH_RELEASE_IND,

#ifdef __HSUPA_SUPPORT__
MSG_ID_TL1DATA_AST_EDCH_SETUP_IND,
MSG_ID_TL1DATA_AST_EDCH_RELEASE_IND,
#endif
MSG_ID_TL1DATA_AST_MEAS_SETUP_IND,
MSG_ID_TL1DATA_AST_MEAS_RELEASE_IND,

MSG_ID_TL1DATA_AST_MEAS_RSCP_INTRA_IND,
MSG_ID_TL1DATA_AST_MEAS_RSCP_INTER_IND,
MSG_ID_TL1DATA_AST_MEAS_ISCP_IND,

MSG_ID_TL1DATA_AST_MEAS_INTERNAL_SETUP_IND,
MSG_ID_TL1DATA_AST_MEAS_INTERNAL_RELEASE_IND,

MSG_ID_TL1DATA_AST_MEAS_INTERNAL_EVENT_IND,
MSG_ID_TL1DATA_AST_MEAS_INTERNAL_PERIODIC_IND,
MSG_ID_TL1DATA_AST_MEAS_INTERNAL_RESULT_IND,

//@CMW
MSG_ID_TL1DATA_AST_BCH_DATA_IND,
MSG_ID_TL1DATA_AST_DATA_IND,
MSG_ID_TL1DATA_AST_HSDSCH_DATA_IND,
MSG_ID_TL1DATA_AST_PREPARE_DATA_REQ,
MSG_ID_TL1DATA_AST_GET_DATA_REQ,

MSG_ID_TL1DATA_AST_HSDSCH_SETUP_DATA_IND,
MSG_ID_TL1DATA_AST_HSDSCH_RELEASE_DATA_IND,
MSG_ID_TL1DATA_AST_HSDSCH_MODIFY_DATA_IND,

//#ifdef __UMAC_DCH_LISR__
MSG_ID_TL1DATA_AST_INFORM_DCH_MAC_IND,
//#endif

#ifdef __PREPARE_TX_AHEAD__
MSG_ID_TL1DATA_AST_INFORM_MAC_CSR_IND,
#endif

#ifdef __HSUPA_SUPPORT__
MSG_ID_TL1DATA_AST_INFORM_EDCH_MAC_IND,
#endif

MSG_ID_TL1DATA_AST_UE_STATE_IND,


MSG_ID_TL1DATA_AST_GAP_SERVICE_IND,


MSG_ID_TL1DATA_AST_GAP_SYNC_RAT_IND,
MSG_ID_TL1DATA_AST_GAP_SYNC_TIMEOUT_IND,
MSG_ID_TL1DATA_AST_GAP_SYNC_CELL_CHANGE_IND,
MSG_ID_TL1DATA_AST_GAP_SYNC_IND,
MSG_ID_TL1DATA_AST_GAP_SYNC_TL1_CNF,

MSG_ID_TL1DATA_AST_GAP_CALC_PROVIDE_IND,
MSG_ID_TL1DATA_AST_GAP_CALC_CANCEL_IND,

MSG_ID_TL1DATA_AST_GAP_RELEASE_IND,

MSG_ID_TL1DATA_AST_FACH_GAP_LOCK_IND,

/* @dms */
MSG_ID_TL1DATA_AST_DMS_MEAS_DONE_IND,
MSG_ID_TL1DATA_AST_TL1C_GAP_PATTERN_STOP,
MSG_ID_TL1DATA_AST_TL1C_GAP_PATTERN_FINISH,
#ifdef TL1_TESTCASE
MSG_ID_TL1DATA_AST_L1CASE_TEST_CMD_IND,
#endif

MSG_ID_TL1DATA_AST_TRACE_IND,

#ifdef __TL1_TST_LOG_DSP_RESP__
MSG_ID_CPHY_SIMULATE_DPA_ONLY_SUB_FRAME_ENTRY_REQ, /*By sub-frame*/
MSG_ID_CPHY_SIMULATE_UPA_ONLY_SUB_FRAME_ENTRY_REQ, /*By sub-frame*/	
#endif

MSG_ID_TL1DATA_AST_CHANNEL_QUALITY_STATUS_IND,

MSG_ID_TL1DATA_AST_NUM,

/* LL1 -> TASK */


MSG_ID_TL1DATA_AST_GAP_SERVICE_START_UMTS_PM_ONLY,
MSG_ID_TL1DATA_AST_GAP_SERVICE_START_UMTS_ALL,
MSG_ID_TL1DATA_AST_GAP_SERVICE_STOP_UMTS,


MSG_ID_TL1DATA_AST_GAP_SYNC_GL1_CNF_SUCCESS,
MSG_ID_TL1DATA_AST_GAP_SYNC_GL1_CNF_FAILURE,

MSG_ID_TL1DATA_AST_GAP_CTRL_GSM_PM_DONE_IND,

MSG_ID_TL1DATA_AST_GAP_CTRL_STOP_GAP_CONFIRM,

MSG_ID_TL1DATA_AST_FACH_GAP_LOCK_CNF,

MSG_ID_TL1DATA_AST_GSM_SYNC_START,

MSG_ID_TL1DATA_AST_DMS_TIM_ADJ_CLEAR_CNF,
/* @dms */

MSG_ID_TL1DATA_AST_GSM_GAP_AVAIABLE_IND,
MSG_ID_TL1DATA_AST_GSM_GAP_UNAVAIABLE_IND,
MSG_ID_TL1DATA_AST_TL1A_GAP_PATTERN_SET,


/* TASK -> TASK */

/* @dms */

MSG_ID_TL1DATA_AST_GAP_SERVICE_FS_REQ,
MSG_ID_TL1DATA_AST_GAP_SERVICE_FS_STOP,
MSG_ID_TL1DATA_AST_GAP_SERVICE_BCH_REQ,
MSG_ID_TL1DATA_AST_GAP_SERVICE_BCH_STOP,
MSG_ID_TL1DATA_AST_GAP_SERVICE_MEAS_REQ,
MSG_ID_TL1DATA_AST_GAP_SERVICE_MEAS_STOP,

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
MSG_ID_TL1DATA_AST_PEER_2G_OPEN_REQ,
MSG_ID_TL1DATA_AST_PEER_2G_CLOSE_REQ,
MSG_ID_TL1DATA_AST_PEER_2G_OPEN_CNF,
#endif

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
MSG_ID_TL1DATA_AST_CHANNEL_PRIORITY_ADJUSTMENT_CNF,
#endif
/* TL1C -> TL4C */
MSG_ID_L4CTL1_EM_TST_CONTROL_CNF,
MODULE_MSG_END( MSG_ID_TL1DATA_AST_MSG_CODE_TAIL )

#ifdef __BUILD_DOM__
};
#endif

#endif  //_TL1DATA_MSG_H
