/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetris.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:47:04 by agardin           #+#    #+#             */
/*   Updated: 2016/02/19 15:58:16 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char 	check_tetris(char *tmp)
{
	int	col;
	int line;
	int	j;

	col = 0;
	line = 0;
	j = 0;
	while (tmp[col] != '\n')
	{
		if (ft_strchri(tmp, '#') >= 0)
			j++;
		col++;
	}
	if 
	line++;
}
