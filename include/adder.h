#pragma once

#ifdef WIN32
#  ifdef DLL_EXPORT_SYMBOLS
#    define DLLEXPORT __declspec(dllexport)
#  else
#    define DLLEXPORT __declspec(dllimport)
#  endif
#else
#  define DLLEXPORT
#endif

class DLLEXPORT Adder {
public:
    int sum(int a, int b);
};
