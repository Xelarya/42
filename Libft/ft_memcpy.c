/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:13:41 by agardin           #+#    #+#             */
/*   Updated: 2015/12/03 15:42:37 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dest;
	char *serc;

	i = 0;
	dest = (char *)dst;
	serc = (char *)src;
	while(i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return(dst);
}
