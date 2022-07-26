#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "libs.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		void	addcontact(void);
		void	displaycontact(void);
		void	searchcontact(void);
	private:
		int		index;
		Contact	contact[8];
};

# endif