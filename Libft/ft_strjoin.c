/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:40:21 by agardin           #+#    #+#             */
/*   Updated: 2016/02/15 17:47:28 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;

	if (s1 && s2)
	{
		new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (new_str)
		{
			ft_strcpy(new_str, s1);
			ft_strcat(new_str, s2);
		}
		return (new_str);
	}
	return (NULL);
}
