#pragma once

#include <vector>
#include <list>
#include <iostream>
#include <string>

template <typename T>

class MutantStack : public std::stack<T>{
    public :
        MutantStack(){
            
        }
        ~MutantStack(){

        }
        MutantStack(const MutantStack &copy){
            *this = copy;
        }
        MutantStack &operator=(const MutantStack &copy){
            (void)copy;
            return *this;
        }
        
    

};
