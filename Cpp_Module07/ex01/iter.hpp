#pragma once

#include <iostream>

template <typename T>
void print(const T &x) {
    std::cout << x <<" ";
}


template <typename T>
void iter(T *arr, int len, void(*func)(const T&) ) {
    for (int i = 0; i < len; i++)
        func(arr[i]);
}