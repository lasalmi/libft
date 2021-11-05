/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:15:36 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 11:22:13 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "AAAAKEEEEEKEO";
	char	*str2 = "KEO";
	char	*print;

	print = ft_strstr(str,str2);

	printf("%s",print);

	return (0);
}