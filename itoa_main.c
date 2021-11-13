/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:23:53 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/13 12:01:25 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
int	main(void)
{
	char *str;
	int		i;

	i = -2147483648;
//	str = ft_itoa(-2147483648);
//while (i < 2147483648)
{
	str = ft_itoa(2147483647);
	printf("%s\n", str);
	free (str);
}
//	ft_itoa(-2147483647);
	return (0);
}