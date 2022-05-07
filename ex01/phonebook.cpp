#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

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
	Contact	contact[8];
};

int	main(void)
{
	Contact me("Wan", "ari", "ad", "0123", "killed a person");
	Contact you("Walter", "White", "Heisenberg", "0000", "is a meth kingpin");
	cout << me.secret << endl;
	cout << you.nickname << you.secret << endl;
	return (0);
}