#include "phonebook.class.hpp"
#include "libs.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::isdigit;

PhoneBook::PhoneBook(void)
{
	index = 0;
}

void	PhoneBook::displaycontact(void)
{
	cout << "Index" << setw(5) << "|";
	cout << "First Name" << setw(0) << "|";
	cout << "Last Name" << setw(1) << "|";
	cout << "Nickname" << setw(2) << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << i;
		cout << this->contact[i].get_firstname() << setw(10) << "|";
		cout << this->contact[i].get_lastname() << setw(10) << "|";
		cout << this->contact[i].get_nickname() << setw(10) << "|" << endl;
	}
}

void	PhoneBook::addcontact(void)
{
	this->contact[this->index].createcontact();
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::searchcontact(void)
{
	string	index;

	while (1)
	{
		getline(cin, index);
		if (string_is_number(index) == 0)
			continue;
		else
			break;
	}
}