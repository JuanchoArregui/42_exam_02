#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int 	i;
	int		firstwordlength;
	int		firstwordstarted;
	int		firstwordfinished;
	int		printedstarted;

	firstwordlength = 0;
	firstwordstarted = -1;
	firstwordfinished = 0;
	printedstarted = 0;
	if (argc >= 2)
	{
		i = 0;
		string = argv[1];
		while (string[i])
		{
			if (!firstwordfinished)
			{
				if (firstwordstarted < 0 && string[i] != ' ')
				{
					firstwordstarted = i;
					firstwordlength += 1;
				}
				else if (firstwordstarted >= 0 && string[i] != ' ')
				{
					firstwordlength += 1;
				}
				else if (firstwordstarted >= 0 && string[i] == ' ')
				{
					firstwordfinished = 1;
				}
			}
			else
			{
				if (string[i] == ' ')
				{
					if (string[i - 1] != ' ')
					{
						write(1, &string[i], 1);
						printedstarted = 1;
					}
				}
				else{
					write(1, &string[i], 1);
					printedstarted = 1;
				}
				
			}
			i++;
		}
		if (string[i -1] != ' ' && printedstarted)
			write(1," ", 1);
		i = firstwordstarted;
		while (string[i] && string[i] != ' ')
		{
			write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}