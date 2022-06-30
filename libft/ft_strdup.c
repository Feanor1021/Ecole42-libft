#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	size_t	i;
	char	*opr;

	s1_len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	opr = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (opr)
	{
		i = 0;
		while (s1[i])
		{
			opr[i] = s1[i];
			i++;
		}
		opr[i] = '\0';
	}
	return (opr);
}
