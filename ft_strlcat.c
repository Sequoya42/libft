/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:07:25 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/11 17:59:30 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ori;

	if (size == 0)
		return (0);
	ori = size;
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ori - 1);
	while (*src && size > 0)
	{
		*dst = *src;
		src++;
		dst++;
		size--;
	}
	*dst = '\0';
	return (ori - size);
}
