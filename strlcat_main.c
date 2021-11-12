/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:42:27 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 11:31:20 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20];
	char	*str2 = "SHALALA";
	char	*str3 = " OMGGGG";
	char	cstr[20];
	char	*cstr2 = "SHALALA";
	char	*cstr3 = " OMGGGG";
	int		catres;
	int		catres2;

	ft_strcpy(str, str2);
	ft_strcpy(cstr, cstr2);
	catres2 = strlcat(cstr, cstr3, 20);
	catres = ft_strlcat(str, str3, 20);
	printf("%s\n", str);
	printf("%i\n", catres);
	printf("%s\n", cstr);
	printf("%i", catres2);
	return (0);
}
