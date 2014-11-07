/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:57:16 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/07 13:00:12 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s1, int fd)
{
	int i;

	i = 0;
	while (s1[i])
	{
		ft_putchar_fd(s1[i], fd);
		i++;
	}
}
