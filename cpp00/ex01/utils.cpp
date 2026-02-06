#include "main.hpp"

int	len_contacts(Contact contacts[8])
{
	int	i = 0;

	while (contacts[i].getFirstName().empty() != true)
		i++;
	return (i);
}

void	print_index(int	i)
{
		std::cout << "         ";
		std::cout << i + 1 << "|";
}

void	print_name(std::string name)
{
	int	len;
	int	j = -1;
	len = name.length();
	if (len <= 10)
	{
		while (len < 10)
		{
			std::cout << " ";
			len ++;
		}
		std::cout << name;
	}
	else
	{
		while (++j < 9)
			std::cout <<  name[j];
		std::cout << ".";
	}
	std::cout << "|";
}
