/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:02:59 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/04 18:02:40 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	const char	*src2;
	char		*dst2;

	i = 0;
	src2 = src;
	dst2 = dst;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
