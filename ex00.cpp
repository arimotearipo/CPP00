#include <iostream>

using namespace std;

static int     ft_isloweralpha(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}

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
			if (ft_isloweralpha(av[i][j]))
				c -= 32;
			cout << c;
			j++;
		}
	}
	cout << endl;
	return (0);
}