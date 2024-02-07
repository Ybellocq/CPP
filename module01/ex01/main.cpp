#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	int	size;

	size = 5;
	Zombie *horde = zombieHorde(size, "Bob");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}