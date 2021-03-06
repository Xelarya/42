/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:32:39 by agardin           #+#    #+#             */
/*   Updated: 2016/02/16 11:54:19 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenint(int cp)
{
	int		nblen;

	if (cp == 0)
		return (1);
	nblen = 0;
	while (cp != 0)
	{
		nblen++;
		cp = cp / 10;
	}
	return (nblen);
}

static int	ft_signint(int cp)
{
	if (cp < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	int		nblen;
	int		sign;
	char	*res;

	sign = ft_signint(n);
	nblen = ft_lenint(n);
	res = (char *)malloc(sizeof(char) * (nblen + sign + 1));
	if (res)
	{
		res = res + nblen + sign;
		*res = '\0';
		if (!n)
			*--res = '0';
		while (n != 0)
		{
			if (n >= 0)
				*--res = (n % 10) + '0';
			else
				*--res = '0' - (n % 10);
			n /= 10;
		}
		if (sign)
			*--res = '-';
	}
	return (res);
}
