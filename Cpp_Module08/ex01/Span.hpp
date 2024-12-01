#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int N;
    std::vector<int> v;
public:
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    
    void addNumbers(int max, int min, int up);
    void addNumber(int n); 
    int shortestSpan(void);
    int longestSpan(void);
};

