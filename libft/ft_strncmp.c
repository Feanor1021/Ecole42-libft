#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		dif;
	size_t	i;

	i = 0;
	dif = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (dif != 0)
			break ;
		i++;
	}
	return (dif);
}
