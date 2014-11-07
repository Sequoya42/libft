/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:36:52 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/05 15:24:46 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int			i;
	int			j;
	char		*s2;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (s1[j])
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s\n", strdup(av[1]));
	printf("%s\n", ft_strdup(av[1]));
	return (0);
}
