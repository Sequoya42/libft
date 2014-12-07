/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:23:39 by rbaum             #+#    #+#             */
/*   Updated: 2014/12/05 15:44:30 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *first, const char *second)
{
	int i;
	int diff;

	i = 0;
	if (!first && !second)
		return (0);
	if (first == NULL)
		return (-1);
	if (second == NULL)
		return (1);
	while (first[i] && second[i])
	{
		diff = ((unsigned char)first[i] - (unsigned char)second[i]);
		if (diff != 0)
			return (diff);
		i++;
	}
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
