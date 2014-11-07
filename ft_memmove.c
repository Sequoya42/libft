/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:24:23 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/06 18:31:55 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	const char		*src2;
	char			*dst2;
	char			tmp[len];

	i = 0;
	src2 = src;
	dst2 = dst;
	while (i < len)
	{
		tmp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst2[i] = tmp[i];
		i++;
	}
	return (dst);
}

int		main(void)
{
	char src[7] = "coucou";
	char dst[7] = "blabla";

	memmove(dst, src, 2);
	printf("%s\n", dst);
	return (0);
}
