#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		c_c;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	c_c = c;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == c_c)
			return (++d + i);
		i++;
	}
	return (NULL);
}
