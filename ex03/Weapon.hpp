#ifndef CPP01_WEAPON_HPP
#define CPP01_WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
public:
	Weapon();
	~Weapon();
	Weapon(std::string type);
	std::string const & getType(void) const;
	void		setType(std::string const type);
	Weapon&		operator=(const Weapon& other);
private:
	std::string _type;
};


#endif //CPP01_WEAPON_HPP
