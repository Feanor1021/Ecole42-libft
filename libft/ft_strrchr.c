#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size_s;

	size_s = ft_strlen(s);
	while (size_s >= 0)
	{
		if (((char *)s)[size_s] == (char)c)
			return ((char *)(s + size_s));
		size_s--;
	}
	return (NULL);
}
