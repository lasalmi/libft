/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:31:31 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/04 17:05:35 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "ABCDEFG";
	char	*str2 = "AAAAAAA";
	char	*c;
	str = ft_memalloc(6);
	str2 = ft_memalloc(6);
	str[0] = 'A';
	str[1] = 'A';
	str[2] = 'A';
	str[3] = 'A';
	str[4] = 'A';
	str[5] = '\0';
	str2[0] = 'E';
	str2[1] = 'B';
	str2[2] = 'E';
	str2[3] = 'B';
	str2[4] = 'E';
	str2[5] = '\0';
	printf("%s", str);
//	c =	memccpy(str, str2, 'E', 6);
	c = ft_memccpy(str, str2, 'E', 6);
	printf("%s\n", str);
	printf("%s", c);

	return (0);
}
