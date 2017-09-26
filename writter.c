#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_writter(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (1);
			j++;
		}	
		i++;
	}
	return (0);
}


int	main(int argc, char **argv)
{
	if (ft_writter(argv[1], argv[2]) == 1)
		ft_putstr(argv[2]);
	else
		ft_putstr("Pas assez de lettres");
	return (0);
}
