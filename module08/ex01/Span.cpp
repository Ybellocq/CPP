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
    else 
        throw spanIsFull();
}

int Span::shortestSpan(){
    if (_vec.size() < 2)
        throw notNumberFind();
    unsigned int min = UINT_MAX;
    for (unsigned int i = 0; i < this->_vec.size(); i++){
        for (unsigned int j = i + 1; j < this-> _vec.size(); j++){
            unsigned int span = abs(this->_vec[j] - this->_vec[i]);
            min = std::min(min, span);
        }
    }
    return min;
}

int Span::longestSpan(){
    if (_vec.size() < 2)
        throw notNumberFind();
    int min = *(std::min_element(this->_vec.begin(), this->_vec.end()));
    int max = *(std::max_element(this->_vec.begin(), this->_vec.end()));
    return (max - min);
}

void Span::addMultipleNumbers(std::vector<int>::iterator it_start, std::vector<int>::iterator it_end){
    if (_vec.size() > _N)
        throw spanIsFull();
    else
        _vec.insert(_vec.end(), it_start, it_end);    
    if (_vec.size() > _N)
        throw spanIsFull();
}
