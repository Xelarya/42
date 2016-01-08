/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:08:27 by agardin           #+#    #+#             */
/*   Updated: 2016/01/08 13:04:36 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		blank;

	i = 0;
	j = ft_strlen(s) - 1;
	blank = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (*s == ' ' || *s == '\n' || *s == '\t')
			blank++;
		i++;
	}
	return (NULL);
}
