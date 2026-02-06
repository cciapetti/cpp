#include <string>
#include <iostream>

class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int         id;

    public:
    Contact();
    Contact(std::string first_name,
        std::string last_name,
        std::string nickname,
        std::string phone_number,
        std::string darkest_secret, int id);

    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    int getId();
};
