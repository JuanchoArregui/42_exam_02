#include <unistd.h>
#include <stdio.h>
#include <string.h>


int    ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s1[i] && s2[i])
	{
		cmp = s1[i] - s2[i];
		if (cmp != 0)
			break;
		i++;
	}
	cmp = s1[i] - s2[i];
	return (cmp);
}

// int	main(void)
// {
// 	printf("\nstrcmp: %d", strcmp("hola", "hoLa"));
// 	printf("\nft_strcmp: %d", ft_strcmp("hola", "hoLa"));
// 	return (0);
// }