/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 08:33:31 by lasalmi           #+#    #+#             */
/*   Updated: 2022/12/05 09:54:04 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Checks strlen and int limits for int overflow protection, that it 
contains a valid number representation */

int	ft_is_int(char *str)
{
	long long	result;

	if (ft_strlen(str) > 11 || !ft_is_number(str))
		return (0);
	result = ft_atoll(str);
	if (result < INT_MIN || result > INT_MAX)
		return (0);
	return (1);
}
