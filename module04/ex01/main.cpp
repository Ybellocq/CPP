#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(){
    const int tab = 100;
    Animal* animals[tab] = { nullptr };

    int i = 0;
    while (i < tab) {
        if (i < tab / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
        i++;
    }
    i = 0;
    while (i < tab) {
        delete animals[i];
        animals[i] = nullptr;
        i++;
    }
    return 0;
}

