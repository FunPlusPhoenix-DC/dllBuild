#include "dllfunc.h"

template<typename T>
dllfunc<T>::dllfunc(/* args */)
{
    std::cout << "This is the default initialize." << std::endl;
}

template<typename T>
dllfunc<T>::~dllfunc()
{
    std::cout << "This is the default destructor" << std::endl;
}

template<typename T>
int dllfunc<T>::memberSize(){
    return sizeof(this->m_member);
    
}