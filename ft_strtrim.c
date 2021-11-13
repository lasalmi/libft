/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:56:19 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/13 09:15:02 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(const char *s)
{
	int		startindex;
	int		endindex;
	int		writeindex;
	char	*newstring;

	startindex = 0;
	endindex = 0;
	while (s[startindex] == '\n' || s[startindex] == '\t' || s[startindex] == ' ')
		startindex++;
	endindex = startindex;
	while (s[endindex] != '\0')
		endindex++;
	endindex--;
	while (s[endindex] == '\n' || s[endindex] == '\t' || s[endindex] == ' ')
		endindex--;
	newstring = ft_strnew(endindex - startindex + 2);
	if (!newstring)
		return (NULL);
	while (startindex <= endindex)
	{
		newstring[writeindex] = s[startindex];
		writeindex++;
		startindex++;
	}
	return (newstring);
}
