#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*root;

	if (lst == NULL || f == NULL)
		return (NULL);
	root = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, new);
		lst = lst->next;
	}
	return (root);
}
