/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:17:58 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/01 11:21:06 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_digit_num(int num)
{
	int	dnum;

	dnum = 0;
	if (num == -2147483648)
		return (11);
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		num = num * -1;
		dnum++;
	}
	while (num > 0)
	{
		num /= 10;
		dnum++;
	}
	return (dnum);
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*arry;

	digit = find_digit_num(n);
	arry = (char *)malloc(sizeof(char) * (digit + 1));
	if (!arry)
		return (NULL);
	arry[digit] = '\0';
	digit--;
	if (n == -2147483648)
		ft_strlcpy(arry, "-2147483648", 12);
	else if (n == 0)
		ft_strlcpy(arry, "0", 2);
	if (n < 0 && n != -2147483648)
	{
		n = n * -1;
		arry[0] = '-';
	}
	while (digit >= 0 && n > 0 && n != -2147483648)
	{
		arry[digit] = n % 10 + '0';
		digit--;
		n /= 10;
	}
	return (arry);
}
