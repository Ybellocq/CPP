#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat constructor is created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor is delete" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Miaou Miaou" << std::endl;
}
