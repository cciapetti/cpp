#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret, int id)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
    this->id = id;
}

std::string Contact::getFirstName()
{
    return this->first_name;
}


std::string Contact::getLastName()
{
    return this->last_name;
}

std::string Contact::getNickName()
{
    return this->nickname;
}

std::string Contact::getPhoneNumber()
{
    return this->phone_number;
}

std::string Contact::getDarkestSecret()
{
    return this->darkest_secret;
}

int Contact::getId()
{
    return this->id;
}