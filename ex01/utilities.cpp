#include "utilities.hpp"

using std::string;

int	string_is_number(string number)
{
	for (int i = 0; i < number.size(); i++)
	{
		if (isdigit(number[i]) == 0)
			return (0);
	}
	return (1);
}