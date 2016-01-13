#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list))
	if (newlst == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		newlst->content = malloc(sizeof(content));
		if (newlst->content == NULL)
			return (NULL);
		ft_memcpy((newlst->content), content, sizeof(content));
		newlst->content_size = content_size;
	}
	newlst-> = NULL;
	return (newlist);
}
