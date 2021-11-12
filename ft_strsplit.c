/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:23:54 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 18:35:23 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static	int	ft_countstrings(char *str, char delimeter)
{
	int		i;
	int		counted;
	int		result;

	counted = 0;
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while (str[i] != delimeter)
		{
			if (counted == 0)
			{
				result++;
				counted = 1;
			}
			i++;
		}
		counted = 0;
		i++;
	}
	return (result);
}
int	main(void)
{
	char *str = "aaBBBBBaaBBBaaaBBBaaa";

	printf("%i",ft_countstrings(str, 'a'));

	return (0);
}
//char	**ft_strsplit(char const *s, int c)//
//{
//
//}