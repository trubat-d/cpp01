#include "Zombie.hpp"

int main(void)
{
	int num = 5;
	Zombie*	tab = zombieHorde(num, "steven");

	for(int i = 0; i < num; i++)
	{
		tab[i].announce();
	}

	delete[] tab;
	return (0);
}
