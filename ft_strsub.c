/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 18:15:58 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/08 19:42:02 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *str;

	i = 0;
	str = ft_strnew(len + 1);
	if (!str || !s)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
	}
	return (dest);
}
