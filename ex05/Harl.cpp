#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug(void)
{
	std::cout << "\n [DEBUG] \n" << std::endl;
	std::cout << "Debçˆˆ´´ˆˆ∑å√ˆˆ∑∂........... just jocking there is no bug, only debug !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "\n [INFO] \n" << std::endl;
	std::cout << "Did you know that tomato is red even if you turn the lights off !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\n [WARNING] \n" << std::endl;
	std::cout << "WARNING !!! WARNING !!!! WARNING !!!! this is a warning in case you don't know !"<< std::endl;
}

void Harl::error(void)
{
	std::cout << "\n [ERROR] \n" << std::endl;
	std::cout << "Hello I am an error and you are a looser !"<< std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string list[4] = {"debug", "info", "warning", "error"};

	for(int i = 0; i < 4; i++)
	{
		if(list[i] == level)
		{
			(this->*func[i])();
		}
	}
}