/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:56:19 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/22 17:13:00 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(const char *s)
{
	int		sindex;
	int		endindex;
	int		writeindex;
	char	*newstring;

	sindex = 0;
	endindex = 0;
	writeindex = 0;
	while (s[sindex] == '\n' || s[sindex] == '\t' || s[sindex] == ' ')
		sindex++;
	endindex = sindex;
	while (s[endindex + 1] != '\0')
		endindex++;
	while (s[endindex] == '\n' || s[endindex] == '\t' || s[endindex] == ' ')
		endindex--;
	newstring = ft_strnew(endindex - sindex + 2);
	if (!newstring)
		return (NULL);
	while (sindex <= endindex)
	{
		newstring[writeindex] = s[sindex];
		writeindex++;
		sindex++;
	}
	return (newstring);
}
