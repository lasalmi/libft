/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:00:42 by lasalmi           #+#    #+#             */
/*   Updated: 2021/12/02 12:29:06 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*arr;
	int		i;

	arr = s;
	i = 0;
	while (n > 0)
	{
		arr[i++] = 0;
		n--;
	}
}
