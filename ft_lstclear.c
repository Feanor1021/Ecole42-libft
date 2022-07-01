/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyardimc <fyardimc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:18:09 by fyardimc          #+#    #+#             */
/*   Updated: 2022/07/01 11:20:52 by fyardimc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*root;

	root = NULL;
	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		root = *lst;
		(*lst) = (*lst)->next;
		ft_lstdelone(root, del);
	}
	*lst = NULL;
}
