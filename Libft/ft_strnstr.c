/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:55:06 by agardin           #+#    #+#             */
/*   Updated: 2016/01/29 14:04:16 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s2)
		return ((char *)s1);
	if (ft_strlen(s1) < ft_strlen(s2))
		return (NULL);
	while (s1 && s1[i] && (i - ft_strlen(s2) < n))
	{
		if (s1[i] == s2[0])
		{
			if (ft_strncmp(s1 + i, s2, n - i) == 0)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
