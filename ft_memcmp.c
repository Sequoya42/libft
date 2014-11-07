/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:32:16 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/05 16:02:51 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			i;
	int			diff;
	const char	*s11;
	const char	*s22;

	s11 = s1;
	s22 = s2;
	i = 0;
	while (s11[i] && i < n && s22[i])
	{
		diff = (s11[i] - s22[i]);
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	const char *str = "reda";

	if (argc > 1)
	{
		printf("%d\n", memcmp(argv[1], str, 4));
		printf("%d\n", ft_memcmp(argv[1], str, 4));
	}
	return (0);
}
