#include "Utilities.hpp"

using std::string;
using std::cout;
using std::setw;
using std::endl;

void	truncate(string todisplay)
{
	if (todisplay.length() > 10)
		cout << setw(9) << todisplay.substr(0, 9) << ".|";
	else
		cout << setw(10) << todisplay << "|";
}