#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int 	i;


	i = 0;
	if (argc == 2)
	{
		string = argv[1];
		while (string[i])
		{
			if (string[i] >= 'A' && string[i] <= 'Y')
				string[i] += 1;
			else if (string[i] == 'Z')
				string[i] = 'A';
			else if (string[i] >= 'a' && string[i] <= 'y')
				string[i] += 1;
			else if (string[i] == 'z')
				string[i] = 'a';
			write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}