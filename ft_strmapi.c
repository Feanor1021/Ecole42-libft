/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:19:29 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/03 13:07:48 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
