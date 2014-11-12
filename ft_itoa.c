/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:41:41 by rbaum             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/12 17:58:09 by rbaum            ###   ########.fr       */
=======
/*   Updated: 2014/11/10 21:07:12 by rbaum            ###   ########.fr       */
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
<<<<<<< HEAD
	int		i;
	int		j;
	int		len;
	char	*str;
	int		div;
=======
	int		len;
	int		i;
	int		div;
	char	*str;
	int		j;
>>>>>>> 6f5c146c8c322dd402e66e463b54f166e5d5a8d7

	i = 0;
	j = 0;
	len = 1;
	div = 1;
	if (n < 0)
	{
		n = -n;
		j = 1;
		len++;
	}
	while (n / (div *= 10) > 0)
		len++;
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	if (j == 1)
		str[i++] = '-';
	while (div > 1)
		str[i++] = (n / (div /= 10)) % 10 + '0';
	return (str);
}
