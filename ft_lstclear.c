
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	while (*lst)
	{
		new = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		(*lst) = new;
	}
	lst = NULL;
}
