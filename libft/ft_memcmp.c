#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		dif;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n))
	{
		dif = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (dif != 0)
			return (dif);
		i++;
	}
	return (0);
}
