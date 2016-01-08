/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:23:39 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 16:37:17 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!f || !s)
		return (NULL);
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
