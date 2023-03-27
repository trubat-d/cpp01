#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon()
{

}

std::string const & Weapon::getType() const
{
	return this->_type;
}

void Weapon::setType(std::string const type)
{
	this->_type = type;
}

Weapon&		Weapon::operator=(const Weapon& other)
{
	this->_type = other._type;
	return *this;
}