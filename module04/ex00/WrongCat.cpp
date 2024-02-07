#include "WrongCat.hpp"

WrongCat::WrongCat(){
    _type = "WrongCat";
    std::cout << "WrongCat constructor is created" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor is delete" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat make sound" << std::endl;
}
