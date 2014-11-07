/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:40:17 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/06 17:23:43 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{

	int i;
	int j;

	i = 0;
	j = 0;
	char	*str;

	str = s1;	
	while (str[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (s1);
}

int		main(void)
{
	char	s1[8] = "abc";
	char	s2[9] = "defrotri";

	printf("le mien : ");
	ft_strcat(s1, s2);
	printf("%s\n", s1);
	printf("le vrai : ");
	strcat(s1, s2);
	printf("%s\n", s1);

	return (0);
}
