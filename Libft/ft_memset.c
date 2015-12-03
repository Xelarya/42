/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:44:51 by agardin           #+#    #+#             */
/*   Updated: 2015/12/03 14:36:00 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *t;

	i = 0;
	t = b; //on ne peut pas deference un void*

	while (i < len)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
