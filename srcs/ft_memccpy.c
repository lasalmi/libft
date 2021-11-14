/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:25:25 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 13:17:33 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*copysource;
	char	*copydest;
	int		i;
	char	cchar;

	if (dest == NULL || src == NULL)
		return (NULL);
	cchar = (char)c;
	copysource = (char *)src;
	copydest = (char *)dest;
	i = 0;
	while (n > 0)
	{
		copydest[i] = copysource[i];
		if (copysource[i] == cchar)
			return (&copydest[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
