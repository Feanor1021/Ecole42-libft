#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else if (dst > src)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)(src))[len];
		}
	}
	return (dst);
}
