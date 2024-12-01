#include "iter.hpp"
#include <iostream>

int main() {

    double arr[] = {1.12, 2.43, 3.0, 412,5.12};
    iter(arr, 5, print);
    std::cout << std::endl;
    int arr1[] = {1, 2, 3, 4, 5};
    iter(arr1, 5, print);
    std::cout << std::endl;
    char arr2[] = "test";
    iter(arr2, 4, print);
    std::cout << std::endl;
    return 0;
}