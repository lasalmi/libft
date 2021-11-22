/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:18:21 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/22 17:03:54 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	void	ft_fillstr(int nb, int	is_negative, char *str)
{
	static int	index;

	if (!index)
		index = 0;
	if (is_negative == 1)
	{
		str[index] = '-';
		index++;
		is_negative = 0;
	}
	if (nb > 10)
	{
		ft_fillstr (nb / 10, is_negative, str);
		ft_fillstr (nb % 10, is_negative, str);
	}
	if (nb < 10)
	{
		str[index] = nb + '0';
		index++;
	}
}

static	int	ft_ilen(int nb)
{
	if (nb < 10)
		return (1);
	else
		return (1 + ft_ilen(nb / 10));
}

char	*ft_itoa(int n)
{
	int		ilen;
	int		is_negative;
	char	*str;

	str = NULL;
	ilen = 0;
	is_negative = 0;
	if (n == -2147483648)
	{
		str = (char *)malloc(12 * sizeof(char));
		ft_fillstr(2, 1, str);
		n = 147483648;
		ilen = 2;
	}
	if (n < 0)
	{
		is_negative = 1;
		ilen = 1;
		n = n * -1;
	}
	if (!str)
		str = (char *)malloc((ilen + ft_ilen(n) + 1) * sizeof(char));
	ft_fillstr(n, is_negative, str);
	str[ft_ilen(n) + 1 + ilen] = '\0';
	return (str);
}
