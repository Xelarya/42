/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:30:03 by agardin           #+#    #+#             */
/*   Updated: 2015/12/03 15:47:40 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *dest;
	char *serc;

	if (dst < src)
		return(ft_memcpy(dst, src, len));
	dest = (char *)dst;
	serc = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			dest[len] = serc[len];
		}
		return (dst);
	}
	return (dst);
}
