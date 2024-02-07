#include "Animal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal constructor is created" << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor is delete" << std::endl;
}

void AAnimal::makeSound() const{
    std::cout << "AAnimal make sound" << std::endl;
}

std::string AAnimal::getType() const{
    return _type;
}
