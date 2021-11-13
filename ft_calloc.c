#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr != NULL)
	{
		ft_bzero(ptr, count * size);
	}
	return (ptr);
}