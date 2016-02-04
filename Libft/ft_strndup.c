/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 14:25:31 by agardin           #+#    #+#             */
/*   Updated: 2016/02/03 16:53:14 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*s2;

	i = ft_strlen(s1);
	j = 0;
	len = 0;
	if (i > n)
		len = n;
	else
		len = i;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s1 || !s2)
		return (NULL);
	while (j < len)
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
