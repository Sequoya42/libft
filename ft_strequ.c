/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:10:09 by rbaum             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/14 19:36:47 by rbaum            ###   ########.fr       */
=======
/*   Updated: 2014/11/13 17:20:30 by rbaum            ###   ########.fr       */
>>>>>>> 123feae9ab5e3cbc5578c6a4122b5805b54b588f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int diff;

	i = 0;
<<<<<<< HEAD
	if (s1 != NULL && s2 != NULL)
=======
	if (s1 != NULL  && s2 != NULL)
>>>>>>> 123feae9ab5e3cbc5578c6a4122b5805b54b588f
	{
		while (s2[i] || s1[i])
		{
			diff = (s1[i] - s2[i]);
			if (diff != 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
