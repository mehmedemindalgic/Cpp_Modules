#pragma once

template <typename T>
class Array
{
    private:
        unsigned int n;
        T *array;
    public:
    Array(){
        n = 0;
        array = new T[0];
    }
    Array(unsigned int n){
        this->n = n;
        array = new T[n];
    }
    Array(const Array &a)
    {
        n = a.n;
        array = new T[n];
        for (unsigned int i = 0; i < n; i++)
            array[i] = a.array[i];
    }
    ~Array()
    {
        delete[] array;
    }
    Array &operator=(const Array &a)
    {
        if (this != &a)
        {
            delete[] array;
            n = a.n;
            array = new T[n];
            for (unsigned int i = 0; i < n; i++)
                array[i] = a.array[i];
        }
        return *this;
    }
    T &operator[](unsigned int i)
    {
        if (i >= n)
            throw std::out_of_range("Out Of Index");
        return array[i];
    }
    unsigned int size() const
    {
        return n;
    }
};
