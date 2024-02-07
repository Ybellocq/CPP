#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog constructor is created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor is delete" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Wouaf Wouaf" << std::endl;
}
