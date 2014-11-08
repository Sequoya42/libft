/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:31:30 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/08 18:14:59 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t i;
	size_t l;
	char *str;

	l = ft_strlen(s);
	str = ft_strnew(l);
	if (!s || !*f)
		return ;
	while (i < l)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
