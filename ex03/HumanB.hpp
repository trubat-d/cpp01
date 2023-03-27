#ifndef CPP01_HUMANB_HPP
#define CPP01_HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB();
	~HumanB();
	HumanB(std::string name, Weapon &wep);
	HumanB(std::string name);
	void	attack() const;
	void	setWeapon(Weapon &wep);
private:
	std::string _name;
	Weapon		*_wep;
};


#endif //CPP01_HUMANB_HPP
