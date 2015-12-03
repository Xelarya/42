/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:13:41 by agardin           #+#    #+#             */
/*   Updated: 2015/11/30 16:21:56 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	char *dest;
	const char *serc;

	i = 0;
	dest = dst;
	serc = src;
	while(i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return(dst);
}
