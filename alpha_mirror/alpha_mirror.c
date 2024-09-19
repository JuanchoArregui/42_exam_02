/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:37:46 by jarregui          #+#    #+#             */
/*   Updated: 2024/09/05 21:12:41 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	opposite_char(char c)
{
	if (c >= 'a' && c <= 'm')
		c = 110 + (109 - c);
	else if (c >= 'n' && c <= 'z')
		c = 109 - (c - 110);
	else if (c >= 'A' && c <= 'M')
		c = 78 + (77 - c);
	else if (c >= 'N' && c <= 'Z')
		c = 77 - (c - 78);
	return (c);
}

int	main(int argc, char *argv[])
{
	char	*string;
	int		i;

	if (argc == 2)
	{
		i = 0;
		string = argv[1];
		while (string[i])
		{
			string[i] = opposite_char(string[i]);
			write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
