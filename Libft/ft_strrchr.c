/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:33:08 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 16:01:53 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if (!s)
		return (ptr);
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (!c)
		ptr = (char *)s;
	return (ptr);
}
