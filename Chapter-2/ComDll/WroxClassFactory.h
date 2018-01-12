#include "WroxComponent.h"

class CWroxClassFactory : public IClassFactory
{
public:
    //Constructor
    CWroxClassFactory() : m_lRefCount(0)
    {}

    STDMETHOD(QueryInterface)(REFIID riid, void** ppv)
    {
        if (riid == IID_IUnknown)
        {
            *ppv = static_cast<IUnknown*>(this);
        }
        else if (riid == IID_IClassFactory)
        {
            *ppv = static_cast<IClassFactory*>(this);
        }
        else
        {
            *ppv = NULL;
            return E_NOINTERFACE;
        }

        static_cast<IUnknown*>(*ppv)->AddRef();
        return S_OK;
    }

    STDMETHOD_(ULONG, AddRef) ()
    {
        return InterlockedIncrement(&m_lRefCount);
    }

    STDMETHOD_(ULONG, Release) ()
    {
        return InterlockedDecrement(&m_lRefCount);
    }

    STDMETHOD(CreateInstance)(IUnknown* punkOuter, REFIID riid, void** ppvObject)
    {
        *ppvObject = NULL;

        //Disallow aggregation
        if (punkOuter != NULL)
        {
            return CLASS_E_NOAGGREGATION;
        }

        //Create a new CWroxComponent object
        CWroxComponent* pwc = new CWroxComponent;

        if (pwc == NULL)
        {
            return E_OUTOFMEMORY;
        }

        HRESULT hr = pwc->QueryInterface(riid, ppvObject);

        if (FAILED(hr))
        {
            delete pwc;
        }

        return hr;
    }

    STDMETHOD(LockServer)(BOOL fLock)
    {
        if (fLock)
        {
            InterlockedIncrement(&g_lLockCount);
        }
        else
        {
            InterlockedDecrement(&g_lLockCount);
        }

        return S_OK;
    }

private:
    long m_lRefCount;
};