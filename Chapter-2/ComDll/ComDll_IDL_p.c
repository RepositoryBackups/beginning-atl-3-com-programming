

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for ComDll_IDL.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ComDll_IDL.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   33                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ComDll_IDL_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ComDll_IDL_MIDL_TYPE_FORMAT_STRING;

typedef struct _ComDll_IDL_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ComDll_IDL_MIDL_PROC_FORMAT_STRING;

typedef struct _ComDll_IDL_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ComDll_IDL_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ComDll_IDL_MIDL_TYPE_FORMAT_STRING ComDll_IDL__MIDL_TypeFormatString;
extern const ComDll_IDL_MIDL_PROC_FORMAT_STRING ComDll_IDL__MIDL_ProcFormatString;
extern const ComDll_IDL_MIDL_EXPR_FORMAT_STRING ComDll_IDL__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWroxInterface_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWroxInterface_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWroxSimple_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWroxSimple_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ComDll_IDL_MIDL_PROC_FORMAT_STRING ComDll_IDL__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Display */


	/* Procedure Alert */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 26 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ComDll_IDL_MIDL_TYPE_FORMAT_STRING ComDll_IDL__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWroxInterface, ver. 0.0,
   GUID={0xB67B7DF8,0x09DC,0x487c,{0xA2,0xF0,0xA2,0xC8,0x00,0x86,0xAD,0xC9}} */

#pragma code_seg(".orpc")
static const unsigned short IWroxInterface_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWroxInterface_ProxyInfo =
    {
    &Object_StubDesc,
    ComDll_IDL__MIDL_ProcFormatString.Format,
    &IWroxInterface_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWroxInterface_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ComDll_IDL__MIDL_ProcFormatString.Format,
    &IWroxInterface_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWroxInterfaceProxyVtbl = 
{
    &IWroxInterface_ProxyInfo,
    &IID_IWroxInterface,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWroxInterface::Alert */
};

const CInterfaceStubVtbl _IWroxInterfaceStubVtbl =
{
    &IID_IWroxInterface,
    &IWroxInterface_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWroxSimple, ver. 0.0,
   GUID={0x9DC7DF38,0xBBBD,0x43e8,{0xA2,0xC7,0xD2,0xEF,0x8A,0xD3,0xFD,0x70}} */

#pragma code_seg(".orpc")
static const unsigned short IWroxSimple_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWroxSimple_ProxyInfo =
    {
    &Object_StubDesc,
    ComDll_IDL__MIDL_ProcFormatString.Format,
    &IWroxSimple_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWroxSimple_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ComDll_IDL__MIDL_ProcFormatString.Format,
    &IWroxSimple_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWroxSimpleProxyVtbl = 
{
    &IWroxSimple_ProxyInfo,
    &IID_IWroxSimple,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWroxSimple::Display */
};

const CInterfaceStubVtbl _IWroxSimpleStubVtbl =
{
    &IID_IWroxSimple,
    &IWroxSimple_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ComDll_IDL__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ComDll_IDL_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWroxSimpleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWroxInterfaceProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ComDll_IDL_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWroxSimpleStubVtbl,
    ( CInterfaceStubVtbl *) &_IWroxInterfaceStubVtbl,
    0
};

PCInterfaceName const _ComDll_IDL_InterfaceNamesList[] = 
{
    "IWroxSimple",
    "IWroxInterface",
    0
};


#define _ComDll_IDL_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ComDll_IDL, pIID, n)

int __stdcall _ComDll_IDL_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ComDll_IDL, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ComDll_IDL, 2, *pIndex )
    
}

const ExtendedProxyFileInfo ComDll_IDL_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ComDll_IDL_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ComDll_IDL_StubVtblList,
    (const PCInterfaceName * ) & _ComDll_IDL_InterfaceNamesList,
    0, /* no delegation */
    & _ComDll_IDL_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

