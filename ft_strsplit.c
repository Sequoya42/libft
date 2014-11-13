/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:28:38 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/13 20:47:48 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int i;

	i = 1;
	if (s != NULL)
	{
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
	return (0);
}

static int		ft_length_words(const  char *s, char c)
{
	char *n;
	int i;
	if (s != NULL)
	{
		n = ft_strchr(s, c);
		if (n == NULL)
			return (ft_strlen(s));
		i = (n - s);
		i = (n - s);
		return (i);
	}
	return (0);
}

char			**ft_strsplit(const char *s, char c)
{
 	unsigned int		count;
	unsigned int		i;
	int					length;
	char				**tab;
	
	i = 0;
	
	if (s != NULL)
	{
		count = ft_count(s, c);
		tab = ft_memalloc(sizeof(char *) * (count + 1));
		i = 0;
		while (i < count)
		{
			length = ft_length_words(s, c);
			tab[i] = ft_strsub(s, 0, length);
			i++;
			s += length;
			while (*s == c && *s != '\0')
				s++;
		}
		return (tab);
	}
	return (0);
}
