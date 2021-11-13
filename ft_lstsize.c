#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*n;
	int		size;

	n = lst;
	size = 0;
	if (lst == NULL)
		return (0);
	while (n->next != NULL)
	{
		n = n->next;
		size++;
	}
	return (size + 1);
}
