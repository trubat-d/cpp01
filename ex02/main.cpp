#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "adresse de la string brain: " << &brain << std::endl;
	std::cout << "adresse de la string stringPTR: " << stringPTR << std::endl;
	std::cout << "adresse de la string stringREF: " << &stringREF << std::endl;

	std::cout << "valeur de la string brain: " << brain << std::endl;
	std::cout << "valeur de la string stringPTR: " << *stringPTR << std::endl;
	std::cout << "valeur de la string stringREF: " << stringREF << std::endl;
	return (0);
}