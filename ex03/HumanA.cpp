#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep) :
_name(name), _wep(wep)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_wep.getType() << std::endl;
}