#pragma once

#include <iostream>
#include <string>


template <typename T>
class Array{
    public:
        Array(): tab(NULL), _size(0){

        }
        ~Array(){
            delete[] tab;
        }
        Array(unsigned int n) : _size(n){
            tab = new T(_size);
            for (size_t i = 0; i < _size; ++i)
                tab[i] = T();
        }
        Array(const Array<T> &copy) : _size(copy.size){
            tab = new T(_size);
            for(size_t i = 0; i < _size; i++)
                tab[i] = copy.tab[i];   
        }
        Array& operator=(const Array<T> &copy){
            delete[] tab;
            _size = copy.size;
            tab = new T(size);
            for(size_t i = 0; i < _size; i++)
                tab[i] = copy.tab[i];
            return *this; //return class     
        }
        class Index :  public std::exception {
            const char* what() const throw () {
                return "Index is on limit";
        }
        };
        T &operator[](size_t i) {
            if (i > _size - 1){
                throw  Index();
            }
            return tab[i];
        }
        size_t size() const { 
            return _size;
        }
    private:
        T  *tab;
        size_t _size;
};