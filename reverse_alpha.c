#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	reverse_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			ft_putchar(26 + 'A' + 'A' - str[i] - 1);
		if (str[i] <= 'z' && str[i] >= 'a')
			ft_putchar(26 + 'a' + 'a' - str[i] - 1);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}


int	main(int argc, char **argv)
{
	reverse_alpha(argv[1]);
	return (0);
}
