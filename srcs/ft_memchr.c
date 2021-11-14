/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:07:38 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/14 15:27:11 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	byte_to_look;
	unsigned int	i;


	src = (unsigned char *)s;
	byte_to_look = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == byte_to_look)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
