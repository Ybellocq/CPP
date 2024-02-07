#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal {
    protected:
        std::string _type;

    public:
        AAnimal();
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        virtual std::string getType() const;
};
#endif
