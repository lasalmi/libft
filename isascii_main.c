/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:28:45 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 13:46:34 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
//	char	a = 'C';
	int i;

	i = -100;
	while (i < 300)
	{
	printf("%i\n",ft_isascii(i));
	printf("%i\n",isascii(i));
	i++;
	}
}