/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:42:27 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/11 14:58:39 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[20];
	char	*str2 = "SHALALA";
	char	*str3 = " OMGGGG";
	int		catres;

	ft_strcpy(str, str2);
	catres = ft_strlcat(str, str3, 5);
	printf("%s\n", str);
	printf("%i", catres);
	return (0);
}
