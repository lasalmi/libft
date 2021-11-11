/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:35:29 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/11 09:40:24 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strchr(const char *s, int c);
{
	char	byte_to_find;
	int		i;

	byte_to_find = (char)c;
	i = 0:
	while (s[i] != '\0')
	{
		if (s[i] == byte_to_find)
			return ((char)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char)&s[i]);
	else
		return (NULL);
}
