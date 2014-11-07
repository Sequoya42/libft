/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:23:39 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/04 17:20:21 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	while (s1[i] && s2[i])
	{
		diff = (s1[i] - s2[i]);
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
