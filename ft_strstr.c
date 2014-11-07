/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:45:27 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/06 15:22:05 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i - j + 1);
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char *s1;
	char *s2;
	char *t;
	char *t2;

	s1 = "tottoto";
	s2 = "toto";
	printf("le fct_ : ");
	t = ft_strstr(s1, s2);
	printf("%s\n", t);
	printf("le vrai : ");
	t2 = strstr(s1, s2);
	printf("%s\n", t2);
	return (0);
}
