/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:10:11 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/04 16:21:12 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*arr;
	char	*arr2;

	arr = ft_memalloc(5);
	arr2 = ft_memalloc(5);
	arr[0] = 'A';
	arr[1] = 'A';
	arr[2] = 'A';
	arr[3] = 'A';
	arr[4] = '\0';
	printf("%s", arr);
	ft_memcpy(arr2, arr, 5);
	printf("%s", arr2);

	free (arr);
	free (arr2);
	return (0);
}