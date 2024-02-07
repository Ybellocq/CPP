#include "Cat.hpp"

Cat::Cat() {
    catBrain = new Brain();
    useCatBrain();
}

Cat::~Cat() {
    delete catBrain;
}

Cat::Cat(const Cat& copy) {
    (void)copy;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaou Miaou" << std::endl;
}

void Cat::useCatBrain() const {
    if (catBrain != nullptr) {
        std::cout << "Cat is thinking..." << std::endl;
    }
}
