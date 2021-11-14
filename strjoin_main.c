/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 07:56:57 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/14 07:58:23 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
int	main(void)
{
	char	*s1 = "TIINA";
	char	*s2 = "LAURI";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("%s", result);

	return (0);
}