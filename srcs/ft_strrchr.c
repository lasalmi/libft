/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:38:30 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/14 15:23:19 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int		i;
	char	byte_to_find;

	i = 0;
	byte_to_find = (char)c;
	while (s[i] != '\0')
		i++;
	if (s[i] == byte_to_find)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == byte_to_find)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
