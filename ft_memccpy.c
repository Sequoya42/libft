/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:06:50 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/04 19:22:39 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	const char		*src2;
	char			*dst2;

	i = 0;
	src2 = src;
	dst2 = dst;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
		if (src2[i] == (unsigned char)c)
			return (dst + 1 + i);
	}
	return (NULL);
}
