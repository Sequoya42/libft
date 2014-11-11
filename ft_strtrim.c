/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:14:11 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/11 18:20:05 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		l;
	int		j;

	i = 0;
	j = 0;
	l = ft_strlen(s);
	str = ft_strnew(l);
	while (s[i])
	{
		if (s[i] != '\n' && s[i] != '\t' && s[i] != ' ' && s[i] != ',')
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	if (str[0] == '\0')
		return (NULL);
	return (str);
}
