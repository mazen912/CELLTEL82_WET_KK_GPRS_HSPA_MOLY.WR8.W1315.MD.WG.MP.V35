/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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

/****************************************************************************
 *
 * COMPONENT:   ASN
 * MODULE:      ASN_COMMON
 * DESCRIPTION: Auto generated by MTK ASN.1 Compiler
 *
 ****************************************************************************/
/*****************************************************************************
 * $Log:$
 * 
 * 09 06 2012 changshun.li
 * [MOLY00000064] [asn.1] for check in tool/code to MOLY
 * .
 * 
 * 09 06 2012 changshun.li
 * [MOLY00000064] [asn.1] for check in tool/code to MOLY
 * .
 *
 * 03 27 2012 changshun.li
 * removed!
 * for msbb2
 *
 * 03 27 2012 changshun.li
 * removed!
 * for msbb2
 *
 ****************************************************************************/

#ifndef ASN_COMMON_H
#define ASN_COMMON_H

#ifdef __cplusplus
 extern "C" {
#endif


//#include <setjmp.h>
//#include "app_buff_alloc.h"
#include "asn_memory.h"
#include "mtkasn_global.h"

typedef enum
{
   ASN_OK    =  0,
   ASN_ERROR = -1
}
AsnStatus;

typedef S8 AsnNull;

typedef struct
{
   int length;
   unsigned char value[100];
}
AsnAny;

typedef S8 AsnObjId;

typedef S8 AsnOpen;

typedef S8 AsnBool;

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL (void *)0
#endif

#ifndef NOT_USED
#define NOT_USED(x) (void)(x)
#endif

#define UA1_ERROR( x ) AsnError( pContext, x )

typedef struct
{
#ifdef  MCD_DLL_EXPORT
   void *pMemBlock[1024];
#else
   void *pMemBlock[20];
#endif
   void **ppNext;
   void **ppEnd;
} AllocRecord;

//add for customize call back
typedef  void  (*PAsnMemAllocCallBack)(void **memPtr, unsigned long size, const char *file, unsigned long line);
typedef  void  (*PAsnMemFreeCallBack)(void ** ppBuffer);
//add for customize call back end

typedef struct
{
   PAsnMemAllocCallBack pMemAllocFunc;
   PAsnMemFreeCallBack pMemFreeFunc;
}AsnCustomMemFunctions;

//added for replace jmpbuf
#ifdef MCD_DLL_EXPORT
  #include <setjmp.h>
  #define asn_jmpbuf jmp_buf
#else
  #if defined(__MTK_TARGET__) && defined(__RVCT__)
    typedef long long asn_jmpbuf[32];
  #elif defined(__MTK_TARGET__)
    typedef int asn_jmpbuf[32];
  #else
   	///add for vc9.0
    //vc 9.0 have un-standard code , cgen could not pass the parse
    // GEN_FOR_PC: just defined when codegen_modis
    #ifndef GEN_FOR_PC
      #include <setjmp.h>
    #else
      #define _JBLEN 32
      #define _JBTYPE int
      typedef _JBTYPE jmp_buf[_JBLEN];
    #endif
    ///
    #define asn_jmpbuf jmp_buf
  #endif
#endif
//added for replace jmpbuf

typedef struct
{
   U32 shiftRegister;
   U32 shiftRegisterLength;
   U8 *pEncoded;
   U8 *pEncodedEnd;
   //jmp_buf env;
   asn_jmpbuf env;
   void *encodeAlloc;
   AllocRecord *decodeAlloc;
#ifdef  MCD_DLL_EXPORT
   char *printBufStart;
   char *printBufNext;
   U32  printBufSize;
#endif
   void *pAppContext;
   U32 result;
   PAsnMemAllocCallBack pMemAllocFunc;
   PAsnMemFreeCallBack  pMemFreeFunc;
}  AsnContext;

#define		ASN_MAX		0xFFFFFFFF
#define		ASN_MIN		-2147483648

typedef struct Tag_OID
{
	U32		valueLen;
	U32		*value;
}OID;


typedef struct Tag_OCTETSTR {
	U32    valueLen;
	U8     *value;
}OCTETSTR;

/************************************************************************/
/*  String  Definition                                                  */
/************************************************************************/
typedef struct Tag__OneByteString
{
	U32		valueLen;
	char  	*value;
}OneByteString;

typedef struct Tag__TwoByteString
{
	U32		valueLen;
	U16  	*value;
}TwoByteString;

typedef struct Tag__FourByteString
{
	U32		valueLen;
	U32  	*value;
}FourByteString;


typedef struct Tag_ASN_OneByteAlphabet
{
	U32		valueLen;
	char	*value;
}ASN_OneByteAlphabet;

typedef struct Tag_ASN_TwoByteAlphabet
{
	U32		valueLen;
	U16		*value;
}ASN_TwoByteAlphabet;

//////////////////////////////////////////////////////////////////////////
// Extension Item
typedef struct Tag_UnKnowExtensionItem
{
	U32		valueLen;
	U8  	*value;
}UnKnowExtensionItem;

typedef struct Tag_UnKnowExtensionItemArray
{
	U32						valueLen;		// Extension Number
	UnKnowExtensionItem		*value;		// Point to the first 
}UnKnowExtensionItemArray;


typedef struct Tag_ChoiceUnKnow
{
	U32		uIndex;
	U32		valueLen;
	U8		*value;
}ChoiceUnKnow;

typedef 		OneByteString      asn_ESCString;

typedef		OneByteString      asn_IA5String;
typedef		OneByteString      asn_NumericString;
typedef		OneByteString      asn_VisibleString;
typedef		OneByteString      asn_PrintableString;

typedef		TwoByteString      asn_BMPString;

typedef		FourByteString     asn_UniversalString;
typedef		asn_ESCString      asn_GeneralString;

typedef		asn_VisibleString  asn_UTCTime;
typedef		asn_VisibleString  asn_GeneralizedTime;

#ifdef  MCD_DLL_EXPORT
#define ASNBUF_BLOCKSIZE 4000
#define ASNBUF_RESERVE 500

void AsnFreeString( char *string );
void InitAsnBuf( AsnContext *pContext );
void AsnPrint( AsnContext *pContext, char *fmt, ... );
void AsnPrintNull( AsnContext *pContext );
void AsnPrintInteger( AsnContext *pContext, S32 value );
void AsnPrintBoolean( AsnContext *pContext, Bool boolean );
void AsnPrintOctetString( AsnContext *pContext, U8 *buffer, U32 length );
void AsnPrintBitString( AsnContext *pContext, U8 *buffer, U32 length );
void AsnPrintCharacterString( AsnContext *pContext, char *string );
void AsnPrintOneByteString( AsnContext *pContext, U8 *buffer, U32 length );
void AsnPrintVisibleString( AsnContext *pContext, asn_VisibleString* pType );
void AsnPrintIA5String( AsnContext *pContext, asn_IA5String* pType );
#endif

typedef		U32  EncodeBeginPoint;

#define		GET_U16_LOW(x)		((x) & 0x00FF)
#define		GET_U16_HIGH(x)		(((x) >> 8) & 0x00FF)
#define		MAKE_U16(low,high)  ((U16)((U8)(low)) | (((U16)(U8)(high))<<8))  

#define		asn_min(a,b)		(((a) < (b)) ? (a) : (b))
#define		asn_max(a,b)		(((a) > (b)) ? (a) : (b))

#define		PER_ALIGN		do{		\
if (0 != (pContext->shiftRegisterLength)%8) {			\
putShortBits( pContext, 8 - (pContext->shiftRegisterLength)%8 , 0);	\
}	\
}while(0);


#define		PER_CLEAR_ALIGN_BITS	getShortBits( pContext, pContext->shiftRegisterLength);


#define		BEGIN_PRE_ENCODE			do{	 						\
   EncodeBeginPoint	begin;					\
   AsnContext TempContext = *pContext;			\
   pContext->shiftRegisterLength = 0;\
   if (NULL != pContext->pEncoded)\
   {\
      pContext->shiftRegister = 0;\
   }\
	 begin = BeginTestEncodeLen(pContext);	


#define	END_PRE_ENCODE	ulen = EndTestEncodeLen(pContext, begin);	\
   if(0 == ulen){putShortBits(pContext, 8, 0); ulen = 1;}\
   *pContext = TempContext;			\
   if (NULL != pContext->pEncoded)\
   {\
      asnMemAlloc(pContext, (void **)&pTemp, ulen);		\
      asnMemCopy(pTemp, pContext->pEncoded, ulen);	\
   }\
}while(0); 


#define		BEGIN_PRE_DECODE_EXT			do{	 		\
		U8 *pTemp;	\
		AsnContext TempContext;	\
		int len = UperGetLengthValue(pContext, 0, ASN_MAX);		\
		asnMemAlloc(pContext, (void **)&pTemp, len);		\
		TempContext = *pContext;


#define	END_PRE_DECODE_EXT	*pContext = TempContext;	\
		getLongBits(pContext, len*8, pTemp);			\
   if (pContext->pMemFreeFunc != NULL)\
   {\
      pContext->pMemFreeFunc((void **)&pTemp);\
   }\
   else\
   {\
		asnMemFree((void **)&pTemp);	\
   }\
}while(0);


#define	COPY_STATIC_ARRAY_TO_BUFFER(pBuffer, Array, begin, len)		do{\
	int i;\
	for(i=0; i<len; i++)\
		{*(pBuffer+i) = Array[begin+i];}\
}while(0);	

U16  GetUperLengthDeterminant( AsnContext *pContext );
void PutUperLengthDeterminant( AsnContext *pContext, U16 length );
void AsnFreeDecoded( void *pType, PAsnMemFreeCallBack pFreeFunc);
void AsnFreeEncoded( U8 *pEncoded, PAsnMemFreeCallBack pFreeFunc);
void AsnRootDecodeAlloc( AsnContext *pContext, void **ppType, int size );
void AsnDecodeAlloc( AsnContext *pContext, void **ppMem, int size );
void AsnDecodeFree( AllocRecord *decodeAlloc, PAsnMemFreeCallBack pFreeFunc);
void AsnEncodeAlloc( AsnContext *pContext, U8 **ppMem, U32 *pEncodedLength );
void AsnEncodeFree( void *pFree, PAsnMemFreeCallBack pFreeFunc);
void AsnError( AsnContext *pContext, U32 errorCode );
extern void initFifo( AsnContext *pContext, U8 *buffer, U32 bufferLength );
extern void flushFifo( AsnContext *pContext );
extern U32  getShortBits( AsnContext *pContext, U32 numBits );
extern U32  getBits( AsnContext *pContext, U32 numBits );
extern void getLongBits( AsnContext *pContext, U32 numBits, U8 *outputBuffer );
extern U64 getInt64( AsnContext *pContext, U32 numBits );
extern void putShortBits( AsnContext *pContext, U32 numBits, U32 data );
extern void putBits( AsnContext *pContext, U32 numBits, U32 data );
extern void putInt64( AsnContext *pContext, U32 numBits, U64 data );
extern void putLongBits( AsnContext *pContext, U32 numBits, U8 *data );
extern S32  GetAlphabetIndex(ASN_OneByteAlphabet *pAlphabet, char *pChar);
extern U32  GetNumberOctetLength(U32  Data);
extern Bool OIDCompare(OID  oidA, U32 length, U32 *pValue);
extern void  SkipEncodeByte(AsnContext *pContext);
extern EncodeBeginPoint BeginTestEncodeLen(AsnContext *pContext);
extern U32	EndTestEncodeLen(AsnContext *pContext, EncodeBeginPoint	BeginPoint);
extern void	PutShortSkipedEncodeByte(AsnContext *pContext,  U32 uByte, U32 Data, U32 uAfterSize);
extern U32	testGetShortBits(AsnContext *pContext, U32 numBits);

#ifdef __cplusplus
}
#endif
#endif /* ASN_COMMON_H */
