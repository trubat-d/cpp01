#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl goat;
	if(ac != 2)
	{
		std::cout << "Enter the level (debug, info, warning, error)" << std::endl;
		return (1);
	}
	std::string in(av[1]);
	if(in != "debug" && in != "info" && in != "warning" && in != "error")
	{
		std::cout << "Enter the level (debug, info, warning, error)" << std::endl;
		return (1);
	}
	goat.complain(in);

	return (0);
}