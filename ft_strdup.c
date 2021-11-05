/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:02:02 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 13:13:43 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*duplicate;

	i = 0;
	length = 0;
	if (!s1)
		return (NULL);
	while (s1[i++] != '\0')
		length++;
	duplicate = (char *)malloc(length + 1);
	i = 0;
	while (s1[i] != '\0')
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
