/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:28:01 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 09:53:22 by lasalmi          ###   ########.fr       */
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
//ft_memset(arr, 0, 5);
memset(arr, 0, 5);
i = 0;
//while (i < 5)
	printf("%s", arr);
return (0);
}
