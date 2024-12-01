#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % MAX_VAL * 2;
        numbers[i] = value;
        mirror[i] = value;
    }
    
    Array<int> tmp = numbers;
    Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << test[i] << " ";
        if (mirror[i] != test[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    delete [] mirror;
    return 0;
}