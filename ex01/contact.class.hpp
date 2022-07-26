#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "libs.hpp"

using std::string;

class	Contact
{
	public:
		void	createcontact(void);
		string	get_firstname(void);
		string	get_lastname(void);
		string	get_nickname(void);
		string	get_phonenumber(void);
		string	get_darkestsecret(void);
	private:
		string	get_contactinfo(string field);
		string	firstname;
		string	lastname;
		string	nickname;
		string	phonenumber;
		string	darkestsecret;
};

# endif