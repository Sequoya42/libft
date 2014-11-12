/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:28:38 by rbaum             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/11 17:37:04 by rbaum            ###   ########.fr       */
=======
/*   Updated: 2014/11/10 17:22:19 by rbaum            ###   ########.fr       */
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
=======
#include <stdio.h> // A VIRER
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7

static int		ft_count(const char *s, char c)
{
	int i;

	i = 1;
	while (*s)
	{
		if (*s == c)
		{
			i++;
			while (*s == c && *s)
				s++;
		}
		s++;
	}
	return (i);
}

<<<<<<< HEAD
static int		ft_length_words(const char *s, char c)
{
	char	*n;
	int		i;
=======
static int		ft_length_words(const  char *s, char c)
{
	char *n;
	int i;
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7

	n = ft_strchr(s, c);
	if (n == NULL)
		return (ft_strlen(s));
<<<<<<< HEAD
	i = (n - s);
=======
	i = (n - s );
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7
	return (i);
}

char			**ft_strsplit(const char *s, char c)
{
	int		count;
	int		i;
	int		length;
	char	**tab;

	count = ft_count(s, c);
	tab = ft_memalloc(sizeof(char *) * (count + 1));
	i = 0;
	while (i < count)
	{
		length = ft_length_words(s, c);
		ft_putnbr(length);
		ft_putchar('\n');
		tab[i] = ft_strsub(s, 0, length);
		i++;
		s += length;
		while (*s == c && *s != '\0')
			s++;
	}
	return (tab);
}
<<<<<<< HEAD
=======

int				main(void)
{
	char	*str;
	char	**t;
	int		i;

	str = "Bonjour@tout@le@@@monde";
	t = ft_strsplit(str, '@');
	i = 0;
	while (t[i])
	{
		printf("%s\n", t[i]);
		i++;
	}
	return (0);
}
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7
