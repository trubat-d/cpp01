#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string name, Weapon &wep) :
		_name(name), _wep(&wep)
{

}

HumanB::HumanB(std::string name) :
		_name(name)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_wep->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wep)
{
	this->_wep = &wep;
}