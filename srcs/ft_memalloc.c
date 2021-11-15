/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:18:18 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/15 10:17:52 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc(size);
	if (!arr)
		return (NULL);
	while (0 < size)
	{
		arr[i++] = 0;
		size--;
	}
	return (arr);
}
