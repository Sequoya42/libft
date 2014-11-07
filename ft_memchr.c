/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:42:10 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/05 11:16:01 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int					i;
	const unsigned char *str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)str + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	printf("%s\n", ft_memchr("couwtrq", 'a', 4));
	return (0);
}
