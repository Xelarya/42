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
	size_t	i;
	char	*dest;
	char	*serc;

	i = 0;
	dest = (char *)dst;
	serc = (char *)src;
	while (i < n)
	{
		dest[i] = serc[i];
		if ((unsigned char)serc[i] == (unsigned char)c)
			return ((char *)dest + i + 1);
		i++;
	}
	return (NULL);
}
