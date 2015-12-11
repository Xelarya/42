/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:36:42 by agardin           #+#    #+#             */
/*   Updated: 2015/12/11 15:42:53 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size < 1)
		return (NULL);
	if (!(mem = malloc(sizeof(void) * size)))
		return (0);
		ft_bzero(mem, size);
		return (mem);
}
