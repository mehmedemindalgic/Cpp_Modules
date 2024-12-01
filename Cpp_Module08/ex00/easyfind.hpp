#pragma once 
#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
    virtual const char *what() const throw()
    {
        return "Value not found";
    }
};

template <typename T>
void easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
    {
        std::cout << "Value found" << std::endl;
        return;
    }
   throw NotFoundException();
}