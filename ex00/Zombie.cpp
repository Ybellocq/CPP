#include "Zombie.hpp"

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " : is delete" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

