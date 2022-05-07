#include <iostream>

using	std::string;
using	std::cin;
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
	public:
		// Contact	contact[8];
		// void	addcontact(Contact newcontact)
		PhoneBook(Contact newcontact)
		{
			cout << "Enter first name" << endl;
			cin >> newcontact.firstname;
			cout << "Enter last name" << endl;
			cin >> newcontact.lastname;
			cout << "Enter nickname" << endl;
			cin >> newcontact.nickname;
			cout << "Enter phone number" << endl;
			cin >> newcontact.phonenumber;
			cout << "Enter darkest secret" << endl;
			cin >> newcontact.secret;
		}
};

int	main(void)
{
	Contact	person("Wan", "Ari", "abc", "123", "no");
	PhoneBook myPhonebook(person);
	return (0);
}