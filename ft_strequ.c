/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:10:09 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/07 11:19:36 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int diff;

	i = 0;
	while (s2[i] || s1[i])
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
	char s1[10] = "reve";
	char s2[10] = "reve";
	
	i = ft_strequ(s1, s2);
	printf("%d\n", i);
	return (0);
}
