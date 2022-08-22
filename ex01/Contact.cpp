#include "Contact.hpp"
#include "Utilities.hpp"

using	std::string;
using	std::cout;
using	std::cin;
using	std::getline;

string	Contact::get_firstname(void)
{
	return (this->firstname);
}

string	Contact::get_lastname(void)
{
	return (this->lastname);
}

string	Contact::get_nickname(void)
{
	return (this->nickname);
}

string	Contact::get_phonenumber(void)
{
	return (this->phonenumber);
}

string	Contact::get_darkestsecret(void)
{
	return (darkestsecret);
}

string	Contact::get_contactinfo(string	field)
{
	string	userinput;
	while (1)
	{
		cout << "Enter " << field << ": ";
		getline(cin, userinput);
		if (userinput.empty() == true)
			continue ;
		else
			break ;
	}
	return (userinput);
}

void	Contact::createcontact(void)
{
	this->firstname = get_contactinfo("firstname");
	this->lastname = get_contactinfo("lastname");
	this->nickname = get_contactinfo("nickname");
	this->phonenumber = get_contactinfo("phone number");
	this->darkestsecret = get_contactinfo("darkest secret");
}