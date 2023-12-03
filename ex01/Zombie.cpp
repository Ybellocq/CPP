#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void)
{
	this->_name = "(null)";
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is delete" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}