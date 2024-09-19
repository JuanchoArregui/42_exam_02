/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:53:51 by jarregui          #+#    #+#             */
/*   Updated: 2024/09/05 20:30:33 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char change_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(int argc, char *argv[])
{
	char	*string;
	int		i;

	if (argc == 2)
	{
		string = argv[1];
		i = 0;
		while (string[i])
		{
			string[i] = change_case(string[i]);
			write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
