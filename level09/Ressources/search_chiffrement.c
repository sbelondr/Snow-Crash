#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (-1);
	int	len = strlen(av[1]);
	int	i = -1;
	while (++i < len)
	{
		int	calc = av[2][i] - av[1][i]; 
		printf("%d - %d - %d\n", av[1][i], av[2][i], calc);
	}
}
