#pragma once

#include <iostream>
#include <string>


template<typename T>
const T & Max(const T & A, const T & B){
    return A > B ? A : B; 
}

template<typename T>
const T & Min  (const T & A, const T & B){
    return A < B ? A : B;
}

template <typename T>
void swap(T & A, T & B){
    T   tmp;
    tmp = A;
    A = B;
    B = tmp;
}

