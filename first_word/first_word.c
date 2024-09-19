#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int		i;
	int		word;
	
	if (argc == 2)
	{
		i = 0;
		word = 0;
		string = argv[1];
		while (string[i])
		{
			if (!word && string[i] != ' ')
			{
				write(1, &string[i], 1);
				word = 1;
			}
			else if (word && string[i] != ' ')
			{
				write(1, &string[i], 1);
			}
			else if (word && string[i] == ' ')
			{
				break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}