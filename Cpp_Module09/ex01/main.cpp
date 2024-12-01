#include "RPN.hpp"
#include <iostream>


int main(int ac, char **av) {

    if (ac == 1) {
        std::cout << "Usage: ./rpn <Numbers>" << std::endl;
        return 1;
    }
    if (ac > 2) {
        std::cout << "Too many arguments" << std::endl;
        return 1;
    }
    std::string str = av[1];
    RPN rpn(str);

}