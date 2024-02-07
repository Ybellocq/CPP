#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        virtual ~Animal();
        virtual void makeSound() const = 0;
        virtual std::string getType() const;
};
#endif
