/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:21:01 by agardin           #+#    #+#             */
/*   Updated: 2016/01/13 15:48:08 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *nlst;

	nlst = lst;
	if (lst != NULL || f != NULL)
	{
		while (nlst)
		{
			f(nlst);
			nlst = nlst->next;
		}
	}
}
