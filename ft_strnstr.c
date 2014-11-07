/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:06:24 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/06 16:46:16 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return (char *)s1;
	while (s1[i] && i < n)
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

	s1 = "awprogbcefjabcgro";
	s2 = "abc";
	printf("le mien : ");
	t = ft_strnstr(s1, s2, 44);
	printf("%s\n", t);
	printf("le vrai : ");
	t2 = strnstr(s1, s2, 44);
	printf("%s\n", t2);
	return (0);
}
