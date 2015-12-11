/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:30:03 by agardin           #+#    #+#             */
/*   Updated: 2015/12/11 15:42:08 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *s1;
	char *s2;

	if (dst < src)
		return(ft_memcpy(dst, src, len));
	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			s1[len] = s2[len];
		}
		return (dst);
	}
	return (dst);
}
