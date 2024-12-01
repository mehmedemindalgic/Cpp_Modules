#pragma once
#include "Base.hpp"

class A : public Base
{};
class notA : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("This is not A object");
        }
};