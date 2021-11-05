/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdel_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:06:10 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 10:14:35 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	str = ft_memalloc(20);
	i = 0;
	while (i < 19)
		str[i++] = 'A';
	str[i] = '\0';
	printf("%s\n", str);
	printf("Address of STR: %p \n", str);
	ft_strdel(&str);
	printf("Address of STR after strdel: %p", str);

	return (0);
}