/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:39:09 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/07 12:03:29 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while ((s2[i] || s1[i]) && i < n)
	{
		diff = (s1[i] - s2[i]);
		if (diff != 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int i;
	char s1[10] = "reva";
	char s2[10] = "reve";

	i = ft_strnequ(s1, s2, 4);
	printf("%d\n", i);
	return (0);
}