// ComDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

//The module's lock count
static long g_lLockCount = 0;


#include "..\..\WroxClassFactory.h"

//Create class object as a global
static CWroxClassFactory g_WroxClassFactory;

//MIDL-generated GUID definitions
#include "..\..\ComDll_IDL_i.c"

extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    //no implementation needed here
    return TRUE;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    if (rclsid == CLSID_WroxComponent)
    {
        return g_WroxClassFactory.QueryInterface(riid, ppv);
    }
    else
    {
        *ppv = NULL;
        return CLASS_E_CLASSNOTAVAILABLE;
    }
}

STDAPI DllCanUnloadNow(void)
{
    return (g_lLockCount == 0) ? S_OK : S_FALSE;
}

STDAPI DllRegisterServer(void)
{
    //Registration implementation should go here
    return S_OK;
}

STDAPI DllUnregisterServer(void)
{
    //Unregistration implementation should go here
    return S_OK;
}