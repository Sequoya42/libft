/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:59:04 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/04 19:23:14 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int a;
	int b;
	int c;
	char str[7] = "coucou";
	char dst[7] = "blabla";
	char *test;

	a = ft_tolower('K');
	printf("%c\n", a);

	b = ft_toupper('k');
	printf("%c\n", b);

	c = ft_isprint(' ');
	printf("%d\n", c);
	
	ft_memset(str, 'e', 4);
	printf("%s\n", src);
	
	ft_bzero(str, 3);
	printf("%s\n", (src + 3));
	
	ft_memcpy(dst, src, 3);
	printf("%s\n", dest);

	test = ft_memccpy(dst, src, 'u', 5);
	printf("%s\n", test);

	return (0);
}
