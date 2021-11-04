/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:28:01 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/04 13:59:15 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
char  arr[] = "GEEK";
int	i;

i = 0;
while (i < 5)
	printf("%c", arr[i++]);
printf("\nAfter memset:\n");
ft_memset(arr, 'L', 4);
//memset(arr, 'L', 4);
i = 0;
//while (i < 5)
	printf("%s", arr);
return (0);
}