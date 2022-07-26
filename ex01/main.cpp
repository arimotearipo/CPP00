#include "libs.hpp"
#include "phonebook.class.hpp"

using	std::string;
using	std::cin;
using	std::cout;
using	std::endl;
using	std::getline;

/*
The program should accept only three commands
1. Add
2. Search
3. Display
Therefore the phonebook class should have 3 member functions that does all these.
*/
int	main(void)
{
	string	userinput;
	PhoneBook	phonebook;

	while (1)
	{
		cout << "What do you want to do? : ";
		getline(cin, userinput);
		if (userinput.compare("EXIT") == 0)
			break ;
		else if (userinput.compare("ADD") == 0)
			phonebook.addcontact();
		else if (userinput.compare("SEARCH") == 0)
		{
			phonebook.displaycontact();
		}
	}
}