#pragma once

#include <iostream>
#include <cstdlib>
#include <stack>

class RPN {
public:
    RPN();
    RPN(std::string str);
    ~RPN();
    RPN(const RPN &src);
    RPN &operator=(const RPN &src);
    void calculate(std::string str);
    void push(int n);
    void pop();
    void add();
    void sub();
    void mul();
    void div();
    void mod();
    void print();
    void error();
private:
    std::stack<int> stack;
};