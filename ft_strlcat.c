/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 08:22:58 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/11 09:03:47 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;
    size_t returnval;

    returnval = ft_strlen(dst) + ft_strlen(src);
    i = 0;
    j = 0;

    while (dest[i] != '\0' && size > (i + 1))
        i++;
    while (size > (i + 1) && src[j] != '\0')
            dest[i++] = src[j++];
    dest[i] = '\0';
    if (size < returnval)
        return (size);
    else    
        return (returnval);
}
