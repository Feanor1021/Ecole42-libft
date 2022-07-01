/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:19:41 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/01 11:20:14 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_indx(char s, char const *c)
{
	while (*c)
	{
		if (s == *c)
			return (1);
		c++;
	}
	return (0);
}

char	*blank_s1(void)
{
	char	*arry;

	arry = (char *)malloc(sizeof(char) * 1);
	if (!arry)
		return (NULL);
	return (arry);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arry;
	size_t	i;
	size_t	start_in;
	size_t	end_in;

	if (!s1)
		return (NULL);
	i = -1;
	while (find_indx(s1[++i], set))
		;
	if (s1[i] == '\0')
	{
		return (blank_s1());
	}
	start_in = i;
	i = ft_strlen((char *)s1);
	i--;
	while (find_indx(s1[i], set) && i >= 0)
		i--;
	end_in = i;
	arry = (char *)malloc(sizeof(char) * (end_in - start_in + 2));
	if (!arry)
		return (NULL);
	ft_strlcpy(arry, (s1 + start_in), end_in - start_in + 2);
	return (arry);
}
