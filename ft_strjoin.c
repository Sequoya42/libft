/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 19:45:53 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/08 20:00:12 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int l;
	char *str;

	i = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	str = ft_strnew(l);
	if (!str || !s1 || !s2)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}

int		main(void)
{
	char const *s1;
	char const *s2;
	char	*t;

	s1 = "bonjour";
	s2 = " tout le monde";
	t = ft_strjoin(s1, s2);
	printf("%s\n", t);
	return (0);
}
