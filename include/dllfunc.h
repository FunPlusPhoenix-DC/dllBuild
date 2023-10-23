#ifndef _DLLFUNC_H_

#define _DLLFUNC_H_

#endif

#include <iostream>

#include <Windows.h>

typedef int*(*ipFunc)(void*);

typedef HANDLE (*hpFunc)(void*);

/*#ifdef __cplusplus 
extern "C" { 
#endif



#ifdef __cplusplus 
} 
#endif 

#define _cplusplus*/

#define DLLFUN_EXPORTS

#ifdef DLLFUN_IMPORTS

#define DLLFUN_API __declspec(dllimport)

#else

#define DLLFUN_API __declspec(dllexport)
                                        //For linux .Keep it blank In WIN32 environment. 

#endif

#ifdef __cplusplus

extern "C"{
  
#endif
class DLLFUN_API dllfunc    //If want to include members and method into a class. Class declared like this .
{
private:
  /* data */
public:
  dllfunc(/* args */);

  ~dllfunc();

  int Min();

  int Max();

  int memberSize();

  void Test(void);

  int regedit;
};

DLLFUN_API void* createDllClass();

DLLFUN_API int disposeDllClass(void* lpclass);

#ifdef __cplusplus
}
#endif

