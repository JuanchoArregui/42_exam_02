#include <unistd.h>

int	ft_str_len(char *string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*string;
	int		len;
	int		to_print;


	if (argc == 2)
	{
		string = argv[1];
		len = ft_str_len(string) - 1;
		to_print = 0;
		while (len >= 0)
		{
			if (string[len] != ' ')
				to_print++;
			else
			{
				write(1, &string[len + 1], to_print);
				to_print = 0;
				write(1, " ", 1);
			}
			len--;
		}
		if (to_print)
			write(1, &string[0], to_print);
	}
	write(1, "\n", 1);
	return(0);
}