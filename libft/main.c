#include "libft.h"
#include <stdio.h>

void	bastir(t_list *root)
{
	while (root != NULL)
	{
		printf("%s\n", (char *)root->content);
		root = root->next;
	}
}

void	inta(void *a)
{
	return ;
}
int	main(void)
{
	t_list *root;

	root = NULL;
	root = ft_lstnew(ft_strdup("furkan"));
	ft_lstadd_back(&root, ft_lstnew(ft_strdup("sea")));
	ft_lstadd_front(&root, ft_lstnew(ft_strdup("rwqr")));
	bastir(root);
	t_list *iter = root;
	while (!ft_strncmp((char *)iter->content, (char *)"furkan",
			ft_strlen("furkan")) && iter->next != NULL)
		iter = iter->next;
	t_list *temp = iter;
	iter->next = iter->next->next;
	printf("\n\n");
	ft_lstdelone(temp, &inta);
	bastir(root);
}