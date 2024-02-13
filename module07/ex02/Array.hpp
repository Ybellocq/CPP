#pragma once

#include <iostream>
#include <string>


template <typename T>
class Array{
    public:
        Array(): tab(NULL), size(0);
        ~Array();
        Array(unsigned int n) : size(n);
        Array(const Array<T> &copy) : size(copy.size){
            tab = new T(size);
            for(unsigned int i = 0; i < size; i++)
                (*this)[i] = copy[i];   
        }
        Array& operator=(const Array<T> &copy);
    private:
        T  *tab;
        unsigned int size;
};