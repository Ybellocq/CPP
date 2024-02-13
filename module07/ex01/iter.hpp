#pragma once

#include <iostream>
#include <string>

template<typename T, typename F>
void iter(T *tab, int len, F function){
    for (int i = 0; i < len; i++){
        function(tab[i]);
    }
}

template<typename T>
void print(const T& arg){
    std::cout << arg << std::endl;
}