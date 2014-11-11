/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:28:38 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/11 17:37:04 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int		ft_length_words(const char *s, char c)
{
	char	*n;
	int		i;

	n = ft_strchr(s, c);
	if (n == NULL)
		return (ft_strlen(s));
	i = (n - s);
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
