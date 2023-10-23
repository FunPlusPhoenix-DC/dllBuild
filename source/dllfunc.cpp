#include "dllfunc.h"



dllfunc::dllfunc(/* args */)
{
    std::cout << "It's construct function" << std::endl;

    regedit = 10;
}

dllfunc::~dllfunc()
{
    std::cout << "It's destruct function" << std::endl;
}


int dllfunc::memberSize(){
    std::cout << "This is the memberSize function" << std::endl;
    return 0;
}

int dllfunc::Max(){
    std::cout << "This is the Max() function" << std::endl;

    return 15;
}

void dllfunc::Test(){
    std::cout << "this is the fucking test " << std::endl;

    regedit = 2023;

    std::cout << regedit << std::endl;
}

DLLFUN_API void __stdcall outOfClass(){
  std::cout << "this func is out of class" << std::endl;
}

DLLFUN_API void* createDllClass(){
    return new dllfunc;
}

DLLFUN_API int disposeDllClass(void* lpclass){
    dllfunc* temp = static_cast<dllfunc*>(lpclass);
    if(temp != NULL){
        delete temp;

        temp = NULL;

        return 0;
    }
    else
        return -1;
}
