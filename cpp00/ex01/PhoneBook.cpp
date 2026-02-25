#include "main.hpp"

PhoneBook::PhoneBook()
{
    // Costruttore di default - inizializza l'array di contatti
}

void	PhoneBook::addInfos(std::string *first_name, std::string *last_name, std::string *nickname, std::string *phone_number, std::string *darkest_secret)
{
	std::cout << "Insert first name..." << std::endl;
	getline(std::cin, *first_name);
	std::cout << "Insert last name..." << std::endl;
	getline(std::cin, *last_name);
	std::cout << "Insert nickname..." << std::endl;
	getline(std::cin, *nickname);
	std::cout << "Insert phone number..." << std::endl;
	getline(std::cin, *phone_number);
	std::cout << "Insert darkest secret..." << std::endl;
	getline(std::cin, *darkest_secret);
}

void    PhoneBook::add_contact(int id)
{
    int i = -1;
	int	min = 1000;
	int toggle = 0;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string	phone_number;

    while (++i < 8)
    {
        if (contacts[i].getFirstName().empty() == true)
        {
			toggle = 1;
			PhoneBook::addInfos(&first_name, &last_name, &nickname, &phone_number, &darkest_secret);
            contacts[i] = Contact(first_name, last_name, nickname, phone_number, darkest_secret, id);
            break ;
        }
    }
	if (i == 8 && toggle == 0)
	{
		int oldest_index = 0;
		i = -1;
		while (++i < 8)
		{
			if (contacts[i].getId() < min)
			{
				min = contacts[i].getId();
				oldest_index = i;  
			}
		}
		PhoneBook::addInfos(&first_name, &last_name, &nickname, &phone_number, &darkest_secret);
		contacts[oldest_index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret, id);
	}
	
}

void    PhoneBook::search()
{
    int			i = -1;
	int			toggle = 0;
	std::string	temp;
	int			len = len_contacts();
	while (++i < len)
	{
		if (toggle == 0)
		{
			std::cout << "     index|first name| last name|  nickname|" << std::endl;
			toggle = 1;
		}
		print_index(i);
		print_name(contacts[i].getFirstName());
		print_name(contacts[i].getLastName());
		print_name(contacts[i].getNickName());
		std::cout << std::endl;
	}
	if (i == 0)
		std::cout << "Phonebook is empty !" << std::endl;

}

int	PhoneBook::len_contacts()
{
	int	i = 0;

	while (i < 8 && contacts[i].getFirstName().empty() != true)
		i++;
	return (i);
}

void    PhoneBook::get_contact(std::string index)
{
	int	len = len_contacts();
	int i = atoi(index.c_str());
	if (i > 0 && i <= len)
	{
		std::cout << "        first name: " << contacts[i - 1].getFirstName() << std::endl;
		std::cout << "        last name: " << contacts[i - 1].getLastName() << std::endl;
		std::cout << "        nickname: " << contacts[i - 1].getNickName() << std::endl;
		std::cout << "        phone number: " << contacts[i - 1].getPhoneNumber() << std::endl;
		std::cout << "        darkest secret: " << contacts[i - 1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Index out of range!" << std::endl;
}

