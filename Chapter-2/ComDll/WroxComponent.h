//Get all the system stuff from windows.h
#include <windows.h>

//Include the MIDL-generated header file to get interface definitions
#include "ComDll_IDL.h"

//Define a class to implement the interface using multiple inheritance
class CWroxComponent : public IWroxInterface, public IWroxSimple
{
public:
    //constructor
    CWroxComponent() : m_lRefCount(0)
    {
        InterlockedIncrement(&g_lLockCount);
    }

    //Destructor
    ~CWroxComponent()
    {
        InterlockedDecrement(&g_lLockCount);
    }

    //The IUnknown methods
    STDMETHOD(QueryInterface) (REFIID riid, void** ppv)
    {
        if(riid == IID_IUnknown)
        {
            *ppv = static_cast<IWroxInterface*>(this);
        }
        else if(riid == IID_IWroxInterface)
        {
            *ppv = static_cast<IWroxInterface*>(this);
        
        }
        else if(riid == IID_IWroxSimple)
        {
            *ppv = static_cast<IWroxSimple*>(this);
        }
        else
        {
            *ppv = NULL;
            return E_NOINTERFACE;
        }

        static_cast<IUnknown*>(*ppv)->AddRef();
        return S_OK;
    }

    STDMETHOD_(ULONG, AddRef)()
    {
        return InterlockedIncrement(&m_lRefCount);
    }

    STDMETHOD_(ULONG,Release) ()
    {
        ULONG ul = InterlockedDecrement(&m_lRefCount);
        
        if(ul == 0)
        {
            delete this;
        }

        return ul;
    }

    // IWroxInterface method
    STDMETHOD(Alert) ()
    {
        MessageBoxA(NULL,"The Alert() method was called","IWroxInterface",MB_OK);
        return S_OK;
    }

    // IWroxSimple method
    STDMETHOD(Display) ()
    {
        MessageBoxA(NULL,"The Display() method was called","IWroxSimple",MB_OK);
        return S_OK;
    }

private:
    long m_lRefCount;
};