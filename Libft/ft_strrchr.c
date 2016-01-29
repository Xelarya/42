/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:33:08 by agardin           #+#    #+#             */
/*   Updated: 2016/01/29 12:51:36 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (*s == '\0' && c != '\0')
		return (NULL);
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0 && s[i] != (char)c)
		i--;
	if (i >= 0 && s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
