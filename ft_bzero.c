#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dst_c;
	size_t	i;

	dst_c = (char *)s;
	i = 0;
	while (i < n)
	{
		*(dst_c + i) = 0;
		i++;
	}
}
