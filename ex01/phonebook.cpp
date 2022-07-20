#include <iostream>

using	std::string;
using	std::cin;
using	std::cout;
using	std::endl;
using	std::getline;

class	Contact
{
	public:
		string	firstname;
		string	lastname;
		string	nickname;
		string	phonenumber;
		string	secret;
		Contact(string firstname, string lastname, string nickname, string phonenumber, string secret)
		{
			this->firstname = firstname;
			this->lastname = lastname;
			this->nickname = nickname;
			this->phonenumber = phonenumber;
			this->secret = secret;
		}
};

class	PhoneBook
{
	public:
		Contact	contact[8];
		void	displaycontact(void)
		{
			cout << "Index" << "First Name" << "Last Name" << endl;
		}
};

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


	while (1)
	{
		cout << "Enter something: " << endl;
		getline(cin, userinput);
		if (userinput.compare("done") == 0)
			break ;
		cout << userinput << endl;
	}
}