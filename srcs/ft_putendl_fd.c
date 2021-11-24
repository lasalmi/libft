/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:54:38 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/24 14:42:11 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(const char *s, int fd)
{
	int	bytes;

	if(!s)
		return ;
	bytes = ft_strlen(s);
	write (fd, s, bytes);
	ft_putchar_fd('\n', fd);
}
