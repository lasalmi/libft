/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:18:21 by lasalmi           #+#    #+#             */
/*   Updated: 2021/12/02 12:29:26 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_fillstr(int nb, int	is_negative, char *str, size_t stopper)
{
	static size_t	index;

	if (!index)
		index = 0;
	if (is_negative == 1)
	{
		str[index] = '-';
		index++;
		is_negative = 0;
	}
	if (nb > 9)
	{
		ft_fillstr (nb / 10, is_negative, str, stopper);
		ft_fillstr (nb % 10, is_negative, str, stopper);
	}
	if (nb < 10)
	{
		str[index] = (char)(nb + '0');
		index++;
		if (index == stopper)
			index = 0;
	}
}

static	size_t	ft_ilen(int nb)
{
	if (nb < 10)
		return (1);
	else
		return (1 + ft_ilen(nb / 10));
}

static	char	*ft_intmin(char **str, int *n, size_t *ilen, size_t stopper)
{
	 *str = (char *)malloc(12 * sizeof(char));
	if (!*str)
		return (NULL);
	ft_fillstr(2, 1, *str, stopper);
	*n = 147483648;
	*ilen = 2;
	return (*str);
}

char	*ft_itoa(int n)
{
	size_t	ilen;
	int		is_negative;
	char	*str;

	str = NULL;
	ilen = 0;
	is_negative = 0;
	if (n == -2147483648)
		ft_intmin(&str, &n, &ilen, (ft_ilen(n) + ilen));
	if (n < 0)
	{
		is_negative = 1;
		ilen = 1;
		n = n * -1;
	}
	if (!str)
		str = (char *)malloc((ilen + ft_ilen(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_fillstr(n, is_negative, str, (ft_ilen(n) + ilen));
	str[ft_ilen(n) + ilen] = '\0';
	return (str);
}
