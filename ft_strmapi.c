/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:51:31 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 12:53:57 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	int		i;
	char	*returnstr;

	i = 0;
	length = 0;
	while ((s[i++] != '\0'))
		length++;
	returnstr = (char *)malloc(length + 1);
	i = 0;
	while (s[i] != '\0')
	{
		returnstr[i] = (*f)(i, s[i]);
		i++;
	}
	returnstr[i] = '\0';
	return (returnstr);
}
