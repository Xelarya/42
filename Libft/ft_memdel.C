#include "libft.h"

void	ft_memdel(void **ap)
{
	free((char *)*ap);
	*ap = NULL;
}
