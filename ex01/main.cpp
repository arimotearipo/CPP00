#include "libs.hpp"

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
		cout << "Enter something: " << endl;
		getline(cin, userinput);
		if (userinput.compare("done") == 0)
			break ;
		cout << userinput << endl;
	}
}