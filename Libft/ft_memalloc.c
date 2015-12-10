/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <agardin@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:50:27 by alex              #+#    #+#             */
/*   Updated: 2015/12/09 14:50:27 by alex             ###   ########.fr       */
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
