#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor is created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor is delete" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
