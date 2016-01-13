#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void*, size_t))
{
	t_list	*lst;
	t_list	*nextlst;

	lst = *alst;
	while (lst)
	{
		nextlst = lst->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		lst = nextlst;
	}
	*alst = NULL;
}
