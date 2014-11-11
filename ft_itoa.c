/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:41:41 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/11 17:56:02 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;
	int		div;

	len = 1;
	div = 1;
	while (n / (div *= 10) > 0)
		len++;
	i = 0;
	str = ft_strnew((n < 0) ? len + 1 : len);
	if (n < 0)
		str[0] = '-';
	while (div > 0)
	{
		div /= 10;
		str[i] = ((n / div) % 10) + '0';
		i++;
	}
	return (str);
}
