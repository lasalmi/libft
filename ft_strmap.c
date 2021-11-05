/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:50:41 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/05 11:58:45 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		length;
	int		i;
	char	*returnstr;

	i = 0;
	length = 0;
	while ((s[i++] != '\0'))
		length++;
	returnstr = (char *)malloc(length + 1);
	i = 0;
	while (s[i] != '\0')
		returnstr[i] = (*f)(s[i++]);
	returnstr[i] = '\0';
	return (returnstr);
}
