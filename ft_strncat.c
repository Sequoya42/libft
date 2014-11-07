/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:21:10 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/06 18:30:02 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = s1;
	while (str[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (s1);
}

int		main(void)
{
	char	s1[88] = "abc";
	char	s2[9] = "defrotri";

	printf("le vrai : ");
	strncat(s1, s2, 4);
	printf("%s\n", s1);
	printf("le mien : ");
	ft_strncat(s1, s2, 4);
	printf("%s\n", s1);
	return (0);
}
