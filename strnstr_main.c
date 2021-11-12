/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:31:10 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 12:56:35 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[20];
	char 	*str2 = "AAAAA BBBBB CCCCC D";
	ft_strcpy(str, str2);
	printf("%s", ft_strnstr(str, "BB", 7));

	return (0);
}