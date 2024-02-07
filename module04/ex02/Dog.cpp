#include "Dog.hpp"

Dog::Dog() {
    dogBrain = new Brain();
    useDogBrain();
}

Dog::~Dog() {
    delete dogBrain;
}

Dog::Dog(const Dog& copy) {
    (void)copy;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Wouaf Wouaf!" << std::endl;
}

void Dog::useDogBrain() const {
    if (dogBrain != nullptr) {
        std::cout << "Dog is thinking..." << std::endl;
    }
}


