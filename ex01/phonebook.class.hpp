#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "utilities.hpp"
#include "contact.class.hpp"

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