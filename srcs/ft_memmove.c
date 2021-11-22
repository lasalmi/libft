/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:24:43 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/22 17:05:03 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*temp;
	char			*source;
	char			*destination;
	unsigned int	i;

	source = (char *)src;
	destination = (char *)dest;
	i = 0;
	temp = ft_memalloc(n);
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destination[i] = temp[i];
		i++;
	}
	return (destination);
}
