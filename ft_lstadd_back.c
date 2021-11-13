#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (lst)
	{
		if (*lst)
		{
			n = ft_lstlast(*lst);
			n->next = new;
		}
		else
			*lst = new;
	}
}
