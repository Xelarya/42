/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:06:01 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 16:44:29 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	size;

	if (!dst || !src)
		return (dst);
	size = ft_strlen(src);
	if (size >= n)
		ft_memcpy(dst, src, n);
	else
	{
		ft_memcpy(dst, src, size);
		ft_memset(dst + size, '\0', n - size);
	}
	return (dst);
}
