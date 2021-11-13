#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bbc;

	bbc = (unsigned char *)b;
	while (len > 0)
	{
		*bbc++ = (unsigned char)c;
		len--;
	}
	return (b);
}
