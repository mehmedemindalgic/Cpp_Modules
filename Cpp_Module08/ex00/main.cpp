#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>

int main()
{
    std::vector<int> vec(5);
    std::deque<int> deque;

    for (size_t i = 1; i <= 5; ++i) {
        vec.push_back(i);
        deque.push_back(i);
        deque.push_front(i);
    }

    try {
        easyfind(vec, 5);
        easyfind(deque, 3);
        easyfind(deque, 10);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}