/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:19:46 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/01 11:20:14 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char			*arry;
	unsigned int	size_s1;

	if (!s1)
		return (NULL);
	size_s1 = ft_strlen(s1);
	if (start >= ft_strlen(s1))
	{
		arry = (char *)malloc(sizeof(char));
		if (!arry)
			return (NULL);
		*arry = '\0';
		return (arry);
	}
	arry = (char *)malloc(sizeof(char) * (len + 1));
	if (!arry)
		return (arry);
	ft_strlcpy(arry, (char *)(s1 + start), len + 1);
	return (arry);
}
