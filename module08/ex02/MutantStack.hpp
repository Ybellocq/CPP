#pragma once

#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <iterator>
#include <stack>

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
        typedef typename std::stack<T>::container_type::iterator iterator;
        //      type_conteneur	Le deuxième paramètre de modèle (Récipient)	Type du conteneur sous-jacent

        typename MutantStack<T>::iterator begin(){
            return (this->c.begin());
        }

        typename MutantStack<T>::iterator end(){
            return (this->c.end());
        } 
};
