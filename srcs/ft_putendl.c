/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:51:58 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/24 14:42:14 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl(const char *s)
{
	int	bytes;

	if(!s)
		return ;
	bytes = ft_strlen(s);
	write (1, s, bytes);
	ft_putchar('\n');
}
