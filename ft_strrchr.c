#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char		ch;

	str = s;
	ch = c;
	while (*str)
	{
		str++;
	}
	while (str >= s)
	{
		if (*str-- == ch)
		{
			return ((char *)str + 1);
		}
	}
	return (NULL);
}
