/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:21:45 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/04 13:41:01 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	char_to_write;
	int				i;
	unsigned char	*arr;

	arr = s;
	char_to_write = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		arr[i] = char_to_write;
		i++;
		n--;
	}
	return (s);
}
