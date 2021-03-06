#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;

	size = 0;
	while (src[size])
		size++;
	if (dstsize == 0)
		return (size);
	size = 0;
	while (src[size] && size < dstsize -1)
	{
		dst[size] = src[size];
		size++;
	}
	dst[size] = '\0';
	size = 0;
	while (src[size])
		size++;
	return (size);
}
