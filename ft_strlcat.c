#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizeres;

	i = 0;
	sizeres = (ft_strlen(dst));
	if (dstsize < sizeres)
		return (dstsize + ft_strlen(src));
	while ((i < dstsize - sizeres - 1) && src[i] \
	&& (sizeres < dstsize - 1) && (dstsize > 0))
	{
		dst[sizeres + i] = src[i];
		i++;
	}
	dst[sizeres + i] = '\0';
	return (sizeres + ft_strlen(src));
}
