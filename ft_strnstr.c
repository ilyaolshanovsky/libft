#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*stack;

	stack = (char *)haystack;
	i = 0;
	if (needle[0] == 0)
		return (stack);
	while (stack[i] && len > i)
	{
		j = 0;
		while (needle[j] == stack[i + j] && needle[j] \
		&& stack[i + j] && (len > i + j))
		{
			j++;
			if (!needle[j])
				return (stack +i);
		}
		i++;
	}
	return (0);
}
