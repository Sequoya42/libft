/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:01:31 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/05 19:11:22 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (s[i - 1])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

int		main(void)
{
	char *s1;
	char *s2;
	char *s3;

	s1 = "r";
	s3 = strrchr(s1, 'r');
	s2 = ft_strrchr(s1, 'r');
	printf("%s\n", s2);
	printf("le vrai\n");
	printf("%s\n", s3);
	return (0);
}
