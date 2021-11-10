/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:39:50 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/10 13:40:20 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dest;
	int		i;
	unsigned char	c;
	char	*daa;

	c = 'a';
	dest = ft_memalloc(8);
	src = ft_memalloc(8);
	i = 0;
	while (i < 7)
	{
		src[i] = c;
		i++;
		c = c + 3;
	}
	src[i] = '\0';
	ft_memmove(dest, src, 8);
	printf("%s\n", dest);
	daa = (char *)ft_memchr(dest, 'j', 5);
	printf("%c", daa[0]);
}
