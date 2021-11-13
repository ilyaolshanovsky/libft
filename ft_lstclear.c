#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	while (*lst != NULL)
	{
		n = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = n;
	}
}
