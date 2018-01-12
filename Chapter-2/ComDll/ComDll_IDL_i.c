

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWroxInterface,0xB67B7DF8,0x09DC,0x487c,0xA2,0xF0,0xA2,0xC8,0x00,0x86,0xAD,0xC9);


MIDL_DEFINE_GUID(IID, IID_IWroxSimple,0x9DC7DF38,0xBBBD,0x43e8,0xA2,0xC7,0xD2,0xEF,0x8A,0xD3,0xFD,0x70);


MIDL_DEFINE_GUID(IID, LIBID_WroxComponentLib,0x7E70BBF9,0xDB08,0x4a2b,0x96,0xFA,0xCE,0x1D,0x56,0x22,0xF4,0x75);


MIDL_DEFINE_GUID(CLSID, CLSID_WroxComponent,0xACC00E56,0xACA4,0x4f81,0xA7,0x1C,0xA2,0x71,0x3E,0xE8,0x2E,0x94);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



