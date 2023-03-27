#ifndef CPP01_HUMANA_HPP
#define CPP01_HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
	~HumanA();
	HumanA(std::string name, Weapon& wep);
	void	attack() const;
private:
	std::string _name;
	Weapon&		_wep;
};


#endif //CPP01_HUMANA_HPP
