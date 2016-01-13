/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:55:06 by agardin           #+#    #+#             */
/*   Updated: 2016/01/13 16:26:01 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;
	unsigned int pos;

	i = 0;
	j = 0;
	pos = 0;
	while (s2[pos])
		pos++;
	if (pos == 0)
		return ((char *)s1);
	while (s1[i] && (i < n))
	{
		while (s2[j] == s1[i + j] && (j < n))
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
