#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain* dogBrain;

    public:
        Dog();
        ~Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        void makeSound() const;
        void useDogBrain() const;
};
#endif
