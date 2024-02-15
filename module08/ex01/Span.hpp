#pragma once

#include <vector>
#include <list>
#include <iostream>
#include <limits>
#include <algorithm>

class Span{
    private :
        unsigned int _N;
        std::vector<int> _vec;

    public :
        Span();
        Span(unsigned int nb);
        ~Span();
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        void addNumber();
        int shortestSpan();
        int longestSpan();
    class notNumberFind : public std::exception{
        virtual const char *what() const throw(){
            return "not number found or only one number find";
    }    
};
};