#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	*z = newZombie("Bobby");
	z->announce();
	randomChump("Boubou");
	delete z;
}

