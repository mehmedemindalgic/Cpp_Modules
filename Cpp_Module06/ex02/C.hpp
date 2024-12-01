#pragma once 
#include "Base.hpp"
class C : public Base
{};
class notc : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("This is not c object");
        }
};