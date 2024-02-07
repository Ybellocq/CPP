#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor is created" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor is delete" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const{
    return _type;
}
