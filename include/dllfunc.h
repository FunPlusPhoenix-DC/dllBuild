#ifndef _DLLFUNC_H_

#define _DLLFUNC_H_

#include <iostream>

#include <Windows.h>

typedef int*(*ipFunc)(void*);

typedef HANDLE (*hpFunc)(void*);

template<class T>
class dllfunc
{
private:
    T m_member;

    T m_num;
public:
    dllfunc(/* args */);
    ~dllfunc();

    dllfunc(T& member);

    T Min();

    T Max();

    int memberSize();
};



#endif