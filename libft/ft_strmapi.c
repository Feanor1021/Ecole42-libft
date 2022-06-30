#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*arry;

	if (!s)
		return (NULL);
	arry = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!arry)
		return (NULL);
	i = 0;
	while (s[i])
	{
		arry[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	arry[i] = '\0';
	return (arry);
}
