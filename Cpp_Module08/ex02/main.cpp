#include "MutantStack.hpp"
#include <iostream>
int main()
{

    {
    MutantStack<int> mstack;
    mstack.push(5); 
    mstack.push(17);
    std::cout << mstack.top() << std::endl; 
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737);
    mstack.push(987);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    }
    std::cout << "---------------------" << std::endl;
    {
        MutantStack<int> stac;
        stac.push(20); 
        stac.push(19);
        stac.push(33); 
        stac.push(55); 
        stac.push(666);
        stac.push(0);
        MutantStack<int>::iterator it = stac.begin(); 
        MutantStack<int>::iterator ite = stac.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(stac);
       
    }
    return 0;
}
