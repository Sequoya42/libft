/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:43:26 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/05 19:01:20 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char *s;
	char *s2;

	s = "coucou";
	s2 = ft_strchr(s, 'u');
	printf("%s\n", s2);
	return (0);
}
