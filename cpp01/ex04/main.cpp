#include <iostream>
#include <fstream>
#include <cstring>

int	check_input(int ac)
{
	if (ac != 4)
		return (std::cout << "Incorrect number of parameters!" << std::endl, 1);
	return (0);
}

int	check_file(std::ifstream &File)
{
	if (File.is_open() == false)
		return (std::cout << "File not open!" << std::endl, 1);
	return (0);
}

std::string	substitution(std::string line, std::string s1, std::string s2)
{
	size_t start = 0;

	if (s1.empty())
		return line;
	start = line.find(s1, start);
	while (start != std::string::npos)
	{
		line.erase(start, s1.length());
		line.insert(start, s2);
		start += s2.length();
		start = line.find(s1, start);
	}
	return line;
}

int main(int ac, char *av[])
{
	if (check_input(ac) == 1)
		return (1);
	int	toggle = 0;
	std::ifstream	InputFile(av[1]); 
	if (check_file(InputFile) == 1)
		return (InputFile.close(), 1);
	std::string outputName = std::string(av[1]) + ".replace";
	std::ofstream OutputFile(outputName.c_str());
	std::string	line;
	std::string s1 = (std::string)av[2];
	std::string s2 = (std::string)av[3];
	while (getline(InputFile, line))
	{
		if (toggle == 1)
			OutputFile << std::endl;
		toggle = 1;
		line = substitution(line, s1, s2);
		OutputFile << line;
	}
	if (line.empty() == true)
		OutputFile << std::endl;

	InputFile.close();
	OutputFile.close();
	return (0);
}
