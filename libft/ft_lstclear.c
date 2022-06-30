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
