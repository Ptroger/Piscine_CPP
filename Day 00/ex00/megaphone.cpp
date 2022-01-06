#include <iostream>

int	ft_strlen(char *s)
{
	int	 i = 0;

	while (s && s[i])
		i++;
	return (i);
}

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int ac, char **av)
{
	int i = 1;

	if (ac > 1)
	{
		while (i < ac)
		{
			for (int j = 0; j < ft_strlen(av[i]); j++)
				std::cout << ft_toupper(av[i][j]);
			std::cout << std::endl;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}