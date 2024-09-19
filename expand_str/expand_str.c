#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int		i;
	int		word;
	int		previousword;
	
	if (argc == 2)
	{
		i = 0;
		previousword = 0;
		word = 0;
		string = argv[1];
		while (string[i])
		{
			if (!word && string[i] != ' ' && string[i] != '	')
			{
				if (previousword)
					write(1, "   ", 3);
				write(1, &string[i], 1);
				word = 1;
				previousword = 1;
			}
			else if (word && string[i] != ' ' && string[i] != '	')
			{
				write(1, &string[i], 1);
			}
			else if (word && (string[i] == ' ' || string[i] != '	'))
			{
				word = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}