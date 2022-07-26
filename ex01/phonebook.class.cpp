#include "libs.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

PhoneBook::PhoneBook(void)
{
	index = 0;
}

void	PhoneBook::displaycontact(void)
{
	for (int i = 0; i < 8; i++)
	{
		cout << i;
		cout << this->contact[i].get_firstname();
		cout << this->contact[i].get_lastname();
		cout << this->contact[i].get_nickname();
	}
}

void	PhoneBook::addcontact(void)
{

}