// Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "..\..\ComDll_IDL.h"
#include "..\..\ComDll_IDL_i.c"

int main()
{
    CoInitialize(NULL);

    IWroxInterface* pWI = NULL;
    HRESULT hr = CoCreateInstance(CLSID_WroxComponent, NULL, CLSCTX_INPROC_SERVER, IID_IWroxInterface, reinterpret_cast<void**>(&pWI));

    if (FAILED(hr))
    {
        std::cout << "CoCreateInstance() failed : 0x" << std::hex << hr << "\n";
        CoUninitialize();
        return 0;
    }

    pWI->Alert();

    IWroxSimple* pWS = NULL;
    hr = pWI->QueryInterface(IID_IWroxSimple, reinterpret_cast<void**>(&pWS));

    if (FAILED(hr))
    {
        std::cout << "QueryInterface() failed : 0x" << std::hex << hr << "\n";
        pWI->Release();
        CoUninitialize();
        return 0;
    }

    pWS->Display();

    pWS->Release();
    pWI->Release();

    CoUninitialize();
    return 0;
}

