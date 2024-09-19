/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:17:24 by jarregui          #+#    #+#             */
/*   Updated: 2024/09/05 21:31:10 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*current;

	size = 0;
	current = begin_list;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
