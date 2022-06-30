#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = dst_size;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + src_size);
	if (dstsize)
	{
		while (*src && i < (dstsize - 1))
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
	}
	return (dst_size + src_size);
}
