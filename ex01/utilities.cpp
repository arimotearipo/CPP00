#include "utilities.hpp"

using std::string;
using std::cout;
using std::setw;
using std::endl;

int	string_is_number(string number)
{
	for (int i = 0; i < number.size(); i++)
	{
		if (isdigit(number[i]) == 0)
			return (0);
	}
	return (1);
}

void	truncate(string todisplay)
{
	if (todisplay.length() > 10)
		cout << setw(9) << todisplay.substr(0, 9) << ".|";
	else
		cout << setw(10) << todisplay << "|";
}