/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:20:45 by agardin           #+#    #+#             */
/*   Updated: 2015/11/30 15:31:04 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *dest;
	const char *serc;

	i = 0;
	dest = dst;
	serc = src;
	while(i < n && serc[i] != c)
	{
		if(!c)
			return(NULL);
		dest[i] = serc[i];
		i++;
	}
	return(dst);
}
