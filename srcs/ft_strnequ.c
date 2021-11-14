/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:10:09 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/14 09:21:42 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
	return (0);
}
