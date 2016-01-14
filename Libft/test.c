/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:57:28 by agardin           #+#    #+#             */
/*   Updated: 2016/01/14 14:52:54 by agardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	/*
    printf("%s", ft_strstr("je comprends pas", "absolument"));
	printf("%s", ft_strstr("je comprends pas", "pas"));
	printf("%s", ft_strstr("je comprends pas", ""));
	*/
	/*
	printf("%s\n", ft_strnstr("je comprends pas", "absolument", 3));
	printf("%s\n", ft_strnstr("je comprends pas", "pas", 2));
	printf("%s\n", ft_strnstr("je comprends pas", "", 3));
	printf("%s\n", ft_strnstr("je comprends pas", "je", 3));
	*/
	/*	
    printf("%s\n", ft_strcpy("test", "mode_42"));

	printf("%s\n", ft_strncpy("test", "mode_42", 3));

    printf("%s\n", ft_strdup("test"));
    printf("%s\n", ft_strdup(""));
    printf("%s\n", ft_strdup("test on sait pas quoi..."));
	*/
	/*	
    printf("%s\n", ft_strcat(av[1], av[2]));
    printf("%s\n", ft_strncat(av[1], av[2], 4));

	ft_putendl(av[1]);
	ft_putnbr((int)av[1]);
	*/
	/*
	ft_putchar_fd('t', 2);
	ft_putstr_fd("Putstr fd: OK\n", 2);
	ft_putendl_fd("Putendl fd: OK", 2);
	*/
	/*	
	printf("%d\n", ft_strequ("test", "tost"));
	printf("%d\n", ft_strequ("test", "test"));
	printf("%d\n", ft_strequ("test", "tast"));
	*/
	/*
	printf("%d\n", ft_strnequ("test", "tast", 2));
	printf("%d\n", ft_strnequ("test", "test", 2));
	printf("%d\n", ft_strnequ("test", "t", 2));
	printf("%d\n", ft_strnequ("test", "", 2));
	printf("%d\n", ft_strnequ("t", "t", 2));
	*/
	/*
	printf("%s\n", ft_strchr("test", 's'));
	printf("%s\n", ft_strchr("test", '\0'));
	*/
	/*
	printf("%d\n", ft_isalpha(107));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha(139));
	*/
	/*
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit(5));
	*/
	/*
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum(5));
	printf("%d\n", ft_isalnum(107));
	printf("%d\n", ft_isalnum('k'));
	printf("%d\n", ft_isalnum(139));
	printf("%d\n", ft_isalnum(065));
	*/
	/*
	printf("%d\n", ft_toupper(97));
	printf("%d\n", ft_toupper('z'));
	printf("%d\n", ft_toupper('G'));
	*/
	/*
	printf("%s\n", ft_itoa(25383659));
	printf("%s\n", ft_itoa('a'));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%d\n", ft_atoi("25383659"));
	printf("%d\n", ft_atoi("-3544"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("-./,),(-*,())"));
	*/
	/*
	printf("%s\n", ft_strtrim("	test    test	mode 42   "));
	printf("%s\n", ft_strtrim(""));
	printf("%s\n", ft_strtrim("	    	    "));
	printf("%s\n", ft_strtrim("NULL"));
	*/
	ft_strsplit("#test###mode**42###test", '#');
	ft_strsplit("#test###mode**42###test", ' ');
}
