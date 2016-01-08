/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:20:44 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 12:21:49 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;

	i = ft_strlen(s1);
	j = 0;
	s2 = malloc(sizeof(char) * (i + 1));
	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	while (j <= i)
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
