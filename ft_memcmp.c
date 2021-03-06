/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:18:36 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/01 11:20:43 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		dif;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n))
	{
		dif = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (dif != 0)
			return (dif);
		i++;
	}
	return (0);
}
