/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:28:38 by rbaum             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/14 19:38:33 by rbaum            ###   ########.fr       */
=======
/*   Updated: 2014/11/13 20:47:48 by rbaum            ###   ########.fr       */
>>>>>>> 123feae9ab5e3cbc5578c6a4122b5805b54b588f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count(char const *s, char c)
{
	int		i;
	int		len;

<<<<<<< HEAD
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			len++;
		i++;
	}
	return (len);
}

char		**ft_sublen(char const *s, char c, char **tab, int nbl)
{
	int		i;
	int		j;
	size_t	start;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && nbl > 0)
		{
			nbl--;
			start = i;
			len = 0;
			while (s[i] != c && s[i++] != '\0')
				len++;
			tab[j++] = ft_strsub(s, start, len);
			i--;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

char		**ft_strsplit(const char *s, char c)
{
	int		nbl;
	char	**tab;

	nbl = 0;
	if (!s)
		return (NULL);
	nbl = ft_count(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nbl + 1))))
		return (NULL);
	tab = ft_sublen(s, c, tab, nbl);
	return (tab);
=======
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
>>>>>>> 123feae9ab5e3cbc5578c6a4122b5805b54b588f
}
