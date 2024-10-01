#include <unistd.h>
#include <stdio.h>

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

int	is_prime(int num)
{
	int	dividers;
	int	i;

	i = num;
	dividers = 0;
	while (i){
		if (num % i == 0)
			dividers++;
		i--;
	}
	if (dividers == 2)
		return (1);
	return (0);
}

void	ft_print_int(int num)
{
	char	buffer[12];
	int		i;
	char	c;

	i = 0;
	while (i < 12)
	{
		buffer[i] = 0;
		i++;
	}
	i = 0;
	if (num == 0)
		buffer[0] = '0';
	else 
	{
		while (num)
		{
			c = (num % 10) + 48;
			buffer[i] = c;
			num /= 10;
			i++;
		}
	}
	i = 0;
	while (buffer[i])
	{
		i++;
	}
	while (i > 0 && buffer[i - 1])
	{
		c = buffer[i - 1];
		write(1, &c, 1);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	int		num;
	int		prime_sum;

	prime_sum = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);

		if (num > 0)
		{
			while (num)
			{
				if (is_prime(num))
					prime_sum += num;
				num--;
			}
		}
	}
	else
		num = 0;
	ft_print_int(prime_sum);
	write(1, "\n", 1);
	return (0);
}