#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while ((haystack[i] == needle[i]) && (haystack[i] && needle[i])
				&& len > 0)
			{
				i++;
				len--;
			}
			if (needle[i] == '\0')
				return ((char *)(haystack));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
