#include <iostream>

using std::cout;
using std::endl;

int	main(int ac, char **av)
{
	int		j;
	char 	c;

	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int i = 1; i < ac ; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			c = av[i][j];
			if (islower(c) > 0)
				c -= 32;
			cout << c;
			j++;
		}
	}
	cout << endl;
	return (0);
}