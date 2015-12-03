/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:50:22 by agardin           #+#    #+#             */
/*   Updated: 2015/11/27 12:19:17 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t i;

	i = 0;
	while (dst[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i >= n && dst[i] != '\0')
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
