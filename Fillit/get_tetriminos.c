/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetriminos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 13:48:56 by agardin           #+#    #+#             */
/*   Updated: 2016/02/19 15:58:44 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int	fd;
	char buff[500];
	char *tmp;

	if (ac >= 2)
	{
		fd = open(av[1], O_RDONLY);
		printf("%d\n", fd);
		read(fd, buff, 500);
		tmp = buff;
		ft_putstr(tmp);
		close(fd);
	}
	return (0);
}
