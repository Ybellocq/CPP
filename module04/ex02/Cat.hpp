#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain* catBrain; // Utilisé pour représenter le cerveau du chat. Commenté pour éviter l'erreur de champ non utilisé.

    public:
        Cat();
        ~Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        void makeSound() const;
        void useCatBrain() const;
};

#endif

