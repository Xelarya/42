/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:20:45 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 16:42:12 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*serc;

	if (dst && src)
	{
		dest = (unsigned char *)dst;
		serc = (unsigned char *)src;
		while (n--)
		{
			*dest = *serc;
			if (*serc == (unsigned char)c)
				return ((void *)dest + 1);
		}
	}
	return (NULL);
}
