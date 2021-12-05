/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:54:38 by lasalmi           #+#    #+#             */
/*   Updated: 2021/12/05 13:17:54 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	size_t	bytes;

	if (!s)
		return ;
	bytes = ft_strlen(s);
	write (fd, s, bytes);
	ft_putchar_fd('\n', fd);
}
