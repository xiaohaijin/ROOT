#ifndef ROOT_DLLImport
#define ROOT_DLLImport

#ifndef __CINT__
#if defined(WIN32)
#define R__DllImport __declspec(dllimport)
#else
#define R__DllImport
#endif
#define R__EXTERN R__DllImport extern
#else
#define R__EXTERN extern
#endif

#endif  // ROOT_DLLImport
