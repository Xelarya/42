/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:12:10 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 12:12:41 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int pos;

	i = 0;
	j = 0;
	pos = 0;
	while (s2[pos])
		pos++;
	if (pos == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s2[j] == s1[i + j])
		{
			if (j == pos - 1)
				return ((char *)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
