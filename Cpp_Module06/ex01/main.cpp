#include "Serializer.hpp"
#include <iostream>
int main()
{
    Data *ds = new Data;
    ds->x = 42;
   
    std::cout <<"Data: "<< ds << std::endl; 
    std::cout <<"Data->x: "<< ds->x << std::endl;
    uintptr_t rawPtr = Serializer::serialize(ds);
    std::cout << "Raw ptr: "<<rawPtr << std::endl;
    Data *tmp = NULL;
    tmp = Serializer::deserialize(rawPtr);
    std::cout <<"tmp: "<< tmp << std::endl <<"tmp->x: "<< tmp->x << std::endl;
    delete ds;
    return 0;
}