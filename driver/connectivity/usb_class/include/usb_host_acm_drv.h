/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
*  A. Patent Notice:
*  The software delivered hereunder, including any and all updates and upgrades, 
*  might be subject to patent rights of standard-setting organizations, patent pools 
*  or their respective patent owners, that will be necessarily infringed by the use 
*  and distribution of the products incorporating all or part of this software.  
*  According to the licensing terms of these patent holders, it is your sole 
*  obligation to obtain the necessary patent licenses from these patent holders 
*  before you can use or distribute the products incorporating all or part of this 
*  software. MediaTek shall not be liable for your failure to obtain or maintain such 
*  licenses.
*  
*    As a courtesy to our customers, the following are some of the software that might 
*    contain such patent licenses, but MediaTek does not warrant the accuracy or
*    completeness of the information below.  
*    (1) MPEG4/AAC/AACPLUS/AACVPLUSV2: essential patents license must be obtained
*        from Via Licensing: <www.vialicensing.com>
*    (2) WAP/MMS security RC5 algorithm belongs to RSA Data Security: 
*        <www.rsasecurity.com> 
*    Notice: Please contact RSA to get this license before shipping the products to 
*    USA which include RC5 security algorithm.
*  
*  B. In addition, customers must contact the respective licensors to obtain 
*  necessary software licenses before it can use or distribute the licensed 
*  products. 
*  
*    As a courtesy to our customers, the following are some of the software licensers 
*    and the notice or disclaimer required by their licenses, but MediaTek does not 
*    warrant the accuracy or completeness of the information below.  
*    (1) Microsoft Windows Media (WMA software): 
*        Microsoft: <www.microsoft.com> 
*        Approved OEM Manufacturers: <wmlicense.smdisp.net/oem_approved/>
*        Sample Windows Media Licensing Agreements: 
*        <www.microsoft.com/windows/windowsmedia/licensing/agreements.aspx>
*    Notice in header or documentation: "This product is protected by certain 
*    intellectual property rights of Microsoft and cannot be used or further 
*    distributed without a license from Microsoft."
*    
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   usb_host_acm_drv.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
  *   This file intends for host CDC ACM class driver definitions
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef USB_HOST_ACM_DRV_H
#define USB_HOST_ACM_DRV_H

//#include "kal_non_specific_general_types.h"
#include "usbd.h"

typedef struct
{
	/* device level resource */	
	USBH_EP_Struct			ep_tx_info;
	USBH_EP_Struct			ep_rx_info;	
	USBH_Common_Struct		common_info;	
}USB_Host_Acm_Struct;


/************************************************************
	extern variables and functions
*************************************************************/

extern USBD_ClassDriver_Struct USB_Host_Acm_Drv;
extern USB_Host_Acm_Struct g_UsbHostAcm;



#endif	/* USB_HOST_ACM_DRV_H */ 
 
