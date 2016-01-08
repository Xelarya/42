/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:02:58 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 16:28:17 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
