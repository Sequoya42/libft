/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:14:11 by rbaum             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/14 19:38:55 by rbaum            ###   ########.fr       */
=======
/*   Updated: 2014/11/13 20:26:10 by rbaum            ###   ########.fr       */
>>>>>>> 123feae9ab5e3cbc5578c6a4122b5805b54b588f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static int	ft_none(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (c);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	size_t	l;
=======
static int		ft_none(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (c);
	return (0);
}

char			*ft_strtrim(const char *s)
{
	char		*str;
	int			i;
	size_t		l;
>>>>>>> 123feae9ab5e3cbc5578c6a4122b5805b54b588f

	l = 0;
	if (s != NULL)
	{
		while (ft_none(*s) != 0)
			s++;
		while (s[l] != '\0')
		{
			i = 0;
			while (ft_none(s[i + l]) != 0)
				i++;
			if (i > 0 && s[i + l] == '\0')
				break ;
			else if (i > 0)
				l = l + i;
			l++;
		}
		str = ft_strnew(l);
		ft_memcpy(str, s, l);
		return (str);
	}
	return (NULL);
}
