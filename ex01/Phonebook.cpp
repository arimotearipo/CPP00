#include "Phonebook.hpp"
#include "Utilities.hpp"

using std::string;
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
	cout << setw(10) << "Index" << "|";
	cout << setw(10) << "First Name" << "|";
	cout << setw(10) << "Last Name" << "|";
	cout << setw(10) << "Nickname" << "|" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << setw(10) << i << "|";
		truncate(this->contact[i].get_firstname());
		truncate(this->contact[i].get_lastname());
		truncate(this->contact[i].get_nickname());
		cout << endl;
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
	int		i;

	while (1)
	{
		cout << "Please select index of contact: ";
		getline(cin, index);
		if (index.size() > 1 || (index[0] < '0' || index[0] > '7'))
			continue;
		else
		{
			i = index[0] - '0';
			cout << this->contact[i].get_firstname() << endl;
			cout << this->contact[i].get_lastname() << endl;
			cout << this->contact[i].get_nickname() << endl;
			cout << this->contact[i].get_phonenumber() << endl;
			cout << this->contact[i].get_darkestsecret() << endl;
			break ;
		}
	}
}