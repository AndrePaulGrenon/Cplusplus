#include "phonebook.class.hpp"

void    add_option(PhoneBook *phonebook)
{
    std::string FirstName, LastName, NickName, Number, Secret;
    bool        is_valid;
    Contact     *contact = &phonebook->_instance[phonebook->GetMyIndex()];
    
    std::cout << std::endl << "---Add a new Contact---" << std::endl << "First Name: ";
    getline(std::cin, FirstName);
    if (!FirstName[0])
    {
        std::cout << std::endl << " 💥 Error , all fields need inputs" << std::endl;
        return;
    }
    std::cout << "Last Name: ";
    getline(std::cin, LastName);
    if (!LastName[0])
    {
        std::cout << std::endl << " 💥 ERROR : all fields need inputs" << std::endl;
        return;
    }
    std::cout << "Nick Name: ";
    getline(std::cin, NickName);
    if (!NickName[0])
    {
        std::cout << std::endl << " 💥 ERROR : all fields need inputs" << std::endl;
        return;
    }
    std::cout << "Phone Number: ";
    getline(std::cin, Number);
    if (!Number[0])
    {
        std::cout << std::endl << " 💥 ERROR : all fields need inputs" << std::endl;
        return;
    }
    std::cout << "Darkest Secret: ";
    getline(std::cin, Secret);
    if (!Secret[0])
    {
        std::cout << std::endl << " 💥 ERROR : all fields need inputs" << std::endl;
        return;
    }
    contact->SetFirstName(FirstName);
    contact->SetLastName(LastName);
    contact->SetNickName(NickName);
    contact->SetNumber(Number);
    contact->SetSecret(Secret);
    phonebook->SetMyIndex(phonebook->GetMyIndex() + 1);
    if (phonebook->GetMyIndex() == 8)
        phonebook->SetMyIndex(0);
}

void    print_all_contact(PhoneBook *phonebook)
{
    int i;

    std::cout << std::endl << "*---------------------------------------------*" << std::endl;
    std::cout << "|         📗       CONTACTS      📘           |" << std::endl;
    std::cout << "*---------------------------------------------*" << std::endl;
    for ( i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << "| Index: " << i + 1 << "|";
        if (phonebook->_instance[i].GetFirstName().length() > 10)
            std::cout <<std::setw(10) << phonebook->_instance[i].GetFirstName().substr(0,9) + "." << "|";
        else
            std::cout <<std::setw(10) << phonebook->_instance[i].GetFirstName() << "|";
        if (phonebook->_instance[i].GetLastName().length() > 10)
            std::cout <<std::setw(10) << phonebook->_instance[i].GetLastName().substr(0,9) + "." << "|";
        else
            std::cout <<std::setw(10) << phonebook->_instance[i].GetLastName() << "|";
        if (phonebook->_instance[i].GetNickName().length() > 10)
            std::cout <<std::setw(10) << phonebook->_instance[i].GetNickName().substr(0,9) + "." << "|";
        else
            std::cout <<std::setw(10) << phonebook->_instance[i].GetNickName() << "|";
        std::cout << std::endl;
    }
    std::cout << "*---------------------------------------------*" << std::endl;
}

void    search_option(PhoneBook *phonebook)
{
    int         i;
    std::string str;

    print_all_contact(phonebook);
    while (1)
    {
        getline(std::cin, str);
        if (str[1] == '\0' && isdigit(str[0]))
        i = std::stoi(str);
        if (i > 0 && i < 9)
            break;
        std::cout << "Please enter a valid number" << std::endl;
    }
    std::cout << std::endl << "----CONTACT INFORMATIONS " << i << "------" << std::endl;
    std::cout << "First Name : " << phonebook->_instance[i - 1].GetFirstName() << std::endl;  
    std::cout << "Last Name : " << phonebook->_instance[i - 1].GetLastName() << std::endl;
    std::cout << "Nick Name : " << phonebook->_instance[i - 1].GetNickName() << std::endl;
    std::cout << "Phone Number : " << phonebook->_instance[i - 1].GetNumber() << std::endl;
    std::cout << "Darkest Secret : " << phonebook->_instance[i - 1].GetSecret() << std::endl;
    std::cout << std::endl;
}

void    options(std::string input, PhoneBook *phonebook)
{
    if (input == "ADD")
        add_option(phonebook);
    if (input == "SEARCH")
        search_option(phonebook);
    return; 
}

void    readline(PhoneBook *phonebook)
{
    std::string input;

    std::cout << "📞📖  Welcome to your personnal PhoneBook  📖📞" << std::endl << std::endl;
    while(1)
    {
        std::cout << std::endl << "    *-----Please-chose-option-----*" <<std::endl;
        std::cout << "    |COMMANDS: ADD | SEARCH | EXIT|" << std::endl << "    *-----------------------------*" << std::endl << std::endl;
        std::getline(std::cin, input);
        if (input == "EXIT")
            break;
        options(input, phonebook);
    }
    return ;
} 