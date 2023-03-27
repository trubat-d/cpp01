#include "Zombie.hpp"

int main(void)
{
	Zombie *zombieOne = newZombie("Foo");
	randomChump("Bar");
	zombieOne->announce();

	delete zombieOne;
	return (0);
}
