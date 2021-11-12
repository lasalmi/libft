/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 08:22:58 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 11:32:08 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while (dest[i] != '\0' && size > i + 1)
		i++;
	if (dest[i] != '\0' && size == i + 1)
		return (size + ft_strlen(src));
	while (size > (i + 1) && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (i);
}