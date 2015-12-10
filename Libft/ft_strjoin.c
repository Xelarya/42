#include "libft.h"

char		*ft_strjoin(char *str1, char *str2)
{
	char	*new_str;

	if (str1 && str2)
	{
		new_str = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
		if (new_str)
		{
			ft_strcpy(new_str, str1);
			ft_strcat(new_str, str2);
		}
		return (new_str);
	}
	return (NULL);
}
