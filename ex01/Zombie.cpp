#include "Zombie.hpp"

void Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "A zombie is born" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "A zombie named " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}