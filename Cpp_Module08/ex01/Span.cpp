#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    if(this->N != other.N)
        this->N = other.N;
    if(this->v != other.v)
        this->v = other.v;  
    return *this;
}

Span::~Span()
{
}
void Span::addNumbers(int max, int min, int up)
{
    if (v.size() + max - min > N)
        throw std::out_of_range("Error: vector is full");
    for (int i = min; i < max; i += up)
        v.push_back(i);
}

void Span::addNumber(int n)
{
    if (v.size() == N)
        throw std::out_of_range("Error: vector is full");
    v.push_back(n);
}

int Span::shortestSpan(void)
{   
 
    if (v.size() < 2)
        throw std::logic_error("Error: not enough elements");
    std::vector<int> tmp = v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 2; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

int Span::longestSpan(void)
{
    if (v.size() < 2)
        throw std::logic_error("Error: not enough elements");
    std::vector<int> tmp = v;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}
