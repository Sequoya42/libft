/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:26:16 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/04 18:03:55 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		diff = (s1[i] - s2[i]);
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
