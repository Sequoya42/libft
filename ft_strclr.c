/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:19:49 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/07 11:08:59 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_strclr(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	while (j < i)
	{
		s[j] = '\0';
		j++;
	}
}

int		main(void)
{
	s[10] = "blablu";
	printf("avant : %s\n", s);
	ft_strclr(s);
	printf("apres : %s\n", s);
	return (0);
}
