#include "list.h"
#include <stddef.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*current;
	int		temp;
	int		sorted;

	if (!lst)
		return (NULL);

	sorted = 0;
	while(!sorted)
	{
		current = lst;
		sorted = 1;
		while (current->next != NULL)
		{
			if (!cmp(current->data, current->next->data))
			{
				temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
				sorted = 0;
			}
			current = current->next;
		}
	}
	return (lst);
}
