#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(t_list *elem))
{
	t_list *nlst;

	while (lst)
	{
		lstnext = lst->;
		f(lst);
		lst = nlst;
	}
}
