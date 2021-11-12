/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:57:44 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 16:12:16 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	arr[20];
	char	*str = "OLEN OMENA LAURI";
	ft_strcpy(arr, str);
	char	*substring = ft_strsub(arr, 11, 5);

	printf("%s", substring); 

	return (0);
}