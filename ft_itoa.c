/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:41:41 by rbaum             #+#    #+#             */
/*   Updated: 2014/11/13 18:40:37 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*max(int n)
{
	char	*str;

	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (str = ft_strdup("2147483647"));
	return (NULL);
}

static void	is_negative(int *n, int *len, int *j)
{
	if (*n < 0)
	{
		*n *= -1;
		*j = 1;
		(*len)++;
	}
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	int		len;
	char	*str;
	int		div;

	i = 0;
	j = 0;
	len = 1;
	div = 1;
	if ((str = max(n)))
		return (str);
	if (!(str = (char *)malloc(sizeof(char) * 21)))
		return (NULL);
	ft_bzero(str, 21);
	is_negative(&n, &len, &j);
	while (n / (div *= 10) > 0)
		len++;
	if (j == 1)
		str[i++] = '-';
	while (div > 1)
		str[i++] = (n / (div /= 10)) % 10 + '0';
	return (str);
}

