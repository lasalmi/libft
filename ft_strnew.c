/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:57:27 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 10:49:35 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	i = 0;
	while (size > 0)
	{
		str[i] = '\0';
		i++;
		size--;
	}
}
