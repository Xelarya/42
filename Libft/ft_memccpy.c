/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:20:45 by agardin           #+#    #+#             */
/*   Updated: 2015/12/03 15:23:33 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *dest;
	char *serc;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	dest = (char *)dst;
	serc = (char *)src;
	while(i < n)
	{
		if (dest[i] == c)
			return (dest + 1 + i);
		dest[i] = serc[i];
		i++;
	}
	return (NULL);
}
