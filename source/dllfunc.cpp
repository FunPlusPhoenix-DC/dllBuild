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