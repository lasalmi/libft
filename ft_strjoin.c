/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 07:51:18 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/14 07:56:51 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*str;

	length = ft_strlen(s1) + ft_strlen(s2);
	str = ft_strnew(length + 1);
	if (!str)
		return (NULL);
	ft_strcat(str, s1);
	ft_strcat(str, s2);

	return (str);
}
