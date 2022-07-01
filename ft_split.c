/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:19:03 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/01 11:20:37 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*skip_char(char const *s, char c)
{
	if (!s)
		return (NULL);
	if (*s == '\0')
		return (0);
	while (*s == c)
	{
		s++;
	}
	return (s);
}

static int	row_count(char const *s, char c)
{
	int	row_num;

	if (!s)
		return (0);
	row_num = 0;
	while (*s)
	{
		if (*s == c)
		{
			s = skip_char(s, c);
			if (*(s) != '\0' && *(s) != c)
				row_num++;
		}
		if (*s)
			s++;
	}
	return (row_num + 1);
}

static char	*ft_cpy_btwn(char const *s1, char const *s2)
{
	char	*arry;
	int		i;
	int		size;

	size = s2 - s1 + 1;
	s2--;
	if (!s1)
		return (NULL);
	arry = (char *)malloc(sizeof(char) * size);
	if (!arry)
		return (NULL);
	i = 0;
	while (s1 <= s2)
	{
		arry[i] = *s1;
		s1++;
		i++;
	}
	arry[i] = '\0';
	return (arry);
}

char	**ft_split(char const *s, char c)
{
	int			row_num;
	int			i;
	const char	*ptr;
	char		**arry;

	s = skip_char(s, c);
	row_num = row_count(s, c);
	i = -1;
	arry = (char **)malloc(sizeof(char *) * (row_num + 1));
	if (!arry)
		return (NULL);
	while (++i < row_num)
	{
		ptr = (char *)s;
		while (*ptr != c)
			ptr++;
		arry[i] = ft_cpy_btwn(s, ptr);
		if (!arry[i])
			return (NULL);
		s = skip_char((s = ptr), c);
	}
	if (row_num == 0)
		i = 0;
	arry[i] = NULL;
	return (arry);
}
