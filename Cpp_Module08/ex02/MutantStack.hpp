#pragma once
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
    private:
        typedef std::stack<T> base;
    public:
        MutantStack() : base() {}
        MutantStack(const MutantStack &other) : base(other) {}
        MutantStack &operator=(const MutantStack &other) { base::operator=(other); return *this; }
        ~MutantStack() {}

        typedef typename base::container_type::iterator iterator;
        iterator begin() { return base::c.begin(); }
        iterator end() { return base::c.end(); }

        typedef typename base::container_type::const_iterator const_iterator;
        const_iterator begin() const { return base::c.begin(); }
        const_iterator end() const { return base::c.end(); }

        typedef typename base::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() { return base::c.rbegin(); }
        reverse_iterator rend() { return base::c.rend(); }
        
        typedef typename base::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator rbegin() const { return base::c.rbegin(); }
        const_reverse_iterator rend() const { return base::c.rend(); }
};