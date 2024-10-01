int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;
	int	ignore;

	i = 0;
	sign = 1;
	num = 0;
	ignore = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] && ((str[i] == '+' || str[i] == '-')))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && !ignore)
	{
		if (str[i] < '0' || str[i] > '9')
			ignore = 1;
		else
			num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (sign * num);
}

/*
 #include <stdlib.h>
 #include <unistd.h>
 #include <stdio.h>
 

int	main(int argc, char *argv[])
{
	char	*string;
	int		num;
	int		ft_num;

	if (argc == 2)
	{
		string = argv[1];

		num = atoi(string);
		printf("atoi: %d\n", num);
		ft_num = ft_atoi(string);
		printf("ft_atoi: %d\n", ft_num);
	}
	write(1, "\n", 1);
	return (0);
}

// int	ft_str_len(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }
 */