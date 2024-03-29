#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        virtual ~Animal();
        virtual void makeSound() const;
        virtual std::string getType() const;
};
#endif
