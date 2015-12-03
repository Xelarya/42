/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:55:19 by agardin           #+#    #+#             */
/*   Updated: 2015/12/03 17:40:14 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
/*	size_t i;
	unsigned char *src;
	unsigned char b;

	i = 0;
	b = (unsigned char)c;
	src = (unsigned char *)s;
	while (n--)
	{
		if (src[i] == b)
			return (src + i);
	}
	return (NULL);
	*/
	while (n--)
	{
		if ((*(unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
