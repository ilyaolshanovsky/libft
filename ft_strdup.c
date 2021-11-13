#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	char	*sc;
	size_t	len;

	len = ft_strlen(s1);
	c = malloc(sizeof(char) * len + 1);
	if (!c)
		return (0);
	sc = c;
	while (len--)
		*c++ = *s1++;
	*c = '\0';
	return (sc);
}
