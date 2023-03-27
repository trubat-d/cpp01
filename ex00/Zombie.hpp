#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;
private:
	std::string _name;
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif //CPP01_ZOMBIE_HPP
