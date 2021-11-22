/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:49:44 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/22 17:10:27 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*returnptr;

	returnptr = ft_strnew(len + 1);
	if (!returnptr)
		return (NULL);
	ft_strncpy(returnptr, &s[start], len);
	return (returnptr);
}