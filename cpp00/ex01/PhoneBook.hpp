#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook :  public Contact
{
    private:
    Contact contacts[8];

    public:
    void	add_contact(int id);
    void	search();
    void    get_contact(std::string index);
    int     len_contacts();
    void	addInfos(std::string *first_name, std::string *last_name, std::string *nickname, std::string *phone_number, std::string *darkest_secret);

    PhoneBook();
};