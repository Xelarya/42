/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:40:21 by agardin           #+#    #+#             */
/*   Updated: 2015/12/11 15:46:47 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *str1, char const *str2)
{
	char	*new_str;

	if (str1 && str2)
	{
		new_str = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
		if (new_str)
		{
			ft_strcpy(new_str, str1);
			ft_strcat(new_str, str2);
		}
		return (new_str);
	}
	return (NULL);
}
