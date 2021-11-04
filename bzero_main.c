/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:05:32 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/04 14:29:59 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
int	main(void)
{
	char *str;

	str = ft_memalloc(5);
	str[0] = 'L';
	printf("%c", str[0]);
//	bzero(str, 4);
	ft_bzero(str, 4);
	printf("%c", str[0]);
	free (str);
	return (0);
}