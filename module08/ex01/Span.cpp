#include "Span.hpp"

Span::Span(){
    
}

Span::~Span(){

}

Span::Span(const Span &copy){
    *this = copy;
}

Span& Span::operator=(const Span &copy){
    _N = copy._N;
    _vec = copy._vec;
    return *this;
}

Span::Span(unsigned int nb) : _N(nb){

}

void Span::addNumber(int num){
    if (_vec.size() <= _N){
        _vec.push_back(num);
    }
}