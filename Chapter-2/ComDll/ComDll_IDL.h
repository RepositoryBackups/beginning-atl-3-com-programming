

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ComDll_IDL_h__
#define __ComDll_IDL_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWroxInterface_FWD_DEFINED__
#define __IWroxInterface_FWD_DEFINED__
typedef interface IWroxInterface IWroxInterface;

#endif 	/* __IWroxInterface_FWD_DEFINED__ */


#ifndef __IWroxSimple_FWD_DEFINED__
#define __IWroxSimple_FWD_DEFINED__
typedef interface IWroxSimple IWroxSimple;

#endif 	/* __IWroxSimple_FWD_DEFINED__ */


#ifndef __WroxComponent_FWD_DEFINED__
#define __WroxComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class WroxComponent WroxComponent;
#else
typedef struct WroxComponent WroxComponent;
#endif /* __cplusplus */

#endif 	/* __WroxComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWroxInterface_INTERFACE_DEFINED__
#define __IWroxInterface_INTERFACE_DEFINED__

/* interface IWroxInterface */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWroxInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B67B7DF8-09DC-487c-A2F0-A2C80086ADC9")
    IWroxInterface : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Alert( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWroxInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWroxInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWroxInterface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWroxInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *Alert )( 
            IWroxInterface * This);
        
        END_INTERFACE
    } IWroxInterfaceVtbl;

    interface IWroxInterface
    {
        CONST_VTBL struct IWroxInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWroxInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWroxInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWroxInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWroxInterface_Alert(This)	\
    ( (This)->lpVtbl -> Alert(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWroxInterface_INTERFACE_DEFINED__ */


#ifndef __IWroxSimple_INTERFACE_DEFINED__
#define __IWroxSimple_INTERFACE_DEFINED__

/* interface IWroxSimple */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWroxSimple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DC7DF38-BBBD-43e8-A2C7-D2EF8AD3FD70")
    IWroxSimple : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWroxSimpleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWroxSimple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWroxSimple * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWroxSimple * This);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IWroxSimple * This);
        
        END_INTERFACE
    } IWroxSimpleVtbl;

    interface IWroxSimple
    {
        CONST_VTBL struct IWroxSimpleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWroxSimple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWroxSimple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWroxSimple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWroxSimple_Display(This)	\
    ( (This)->lpVtbl -> Display(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWroxSimple_INTERFACE_DEFINED__ */



#ifndef __WroxComponentLib_LIBRARY_DEFINED__
#define __WroxComponentLib_LIBRARY_DEFINED__

/* library WroxComponentLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_WroxComponentLib;

EXTERN_C const CLSID CLSID_WroxComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("ACC00E56-ACA4-4f81-A71C-A2713EE82E94")
WroxComponent;
#endif
#endif /* __WroxComponentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


