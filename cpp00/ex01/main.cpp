#include "main.hpp"

int main()
{
    std::string command;
    PhoneBook   phonebook;
    int         id = 0;
    std::string index;
    std::cout << "ADD, SEARCH, EXIT..." << std::endl;
    getline(std::cin, command);
    while (command != "EXIT")
    {
        if (command == "ADD")
        {
            id++;
            phonebook.add_contact(id);
        }
        else if (command =="SEARCH")
        {
            phonebook.search();
            if (phonebook.len_contacts() > 0)
            {
                std::cout << "Index of contact..." << std::endl;
                getline(std::cin, index);
                phonebook.get_contact(index);
            }
        }
        std::cout << std::endl << "ADD, SEARCH, EXIT..." << std::endl;
        getline(std::cin, command);
    }
}