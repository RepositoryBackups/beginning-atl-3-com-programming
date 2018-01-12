1. Add the def file to project properties. <br />
Project Properties->Linker->All Options->Module definition file

2. The DLL, and client created by me were x86 (32bit), hence on my Windows 10 x64 machine I had to create the registry entries for registring the component in the following location. <br />

HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\Classes\CLSID\
<br />
eg. HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\Classes\CLSID\{ACC00E56-ACA4-4f81-A71C-A2713EE82E94}\InprocServer32