#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

class OccurenceException : public std::exception{
    public :
        virtual const char * what () const throw (){
            return ("No Occurence found!");
        }    
};

template <typename T>
void easyfind(const T & container, int nb){
    if (std::find(container.begin(), container.end(), nb) != container.end())
        std::cout << nb << " is in the container." << std::endl;
    else   
        throw  OccurenceException();
}