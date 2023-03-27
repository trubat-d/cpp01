#include <string>
#include <iostream>
#include <fstream>

bool doesFileExist (const std::string& name) {
	std::ifstream f(name.c_str());
	return f.fail();
}

void	replacer(std::string const s1, std::string const s2, std::string& buf)
{
	std::size_t pos;
	std::size_t last_pos = 0;
	if(s1 == s2)
		return ;
	pos = buf.find(s1, last_pos);
	while(pos != std::string::npos)
	{
		buf.erase(pos, s1.length());
		buf.insert(pos, s2);
		last_pos = pos + s2.length();
		pos = buf.find(s1, last_pos);
	}
}

int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "Enter the name of the file and two strings" << std::endl;
		return (1);
	}
	std::string const fl(av[1]);
	std::string const s1(av[2]);
	std::string const s2(av[3]);

	if(doesFileExist(fl))
	{
		std::cout << "Cannot open file or file not exists" << std::endl;
		return (1);
	}
	if(fl == "/dev/null")
	{
		std::cout << "Empty dev file not allowed !" << std::endl;
		return (1);
	}
	else if (fl == "/dev/random")
	{
		std::cout << "Generator file not allowed !" << std::endl;
		return (1);
	}
	if(s1.empty() || s2.empty())
	{
		std::cout << "Strings are empty" << std::endl;
		return (1);
	}
	std::ifstream inputFile(fl);
	std::ofstream outputFile (fl + ".replace");
	std::string buf = "";
	std::string bigBuff = "";
	for(int i = 0; std::getline(inputFile, buf); i++)
	{
		bigBuff += buf;
		if(!inputFile.eof())
			bigBuff += "\n";
	}
	replacer(s1, s2, bigBuff);
	outputFile << bigBuff;
	outputFile.close();
	inputFile.close();
	return (0);
}