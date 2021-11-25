/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:11:34 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/25 14:25:59 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	newlink = (t_list *)malloc(sizeof(t_list));
	if (!newlink)
		return (NULL);
	if (content == NULL)
	{
		newlink->content = NULL;
		newlink->content_size = 0;
		return (newlink);
	}
	else
	{
		newlink->content = ft_memalloc(content_size);
		ft_memcpy(newlink->content, content, content_size);
		newlink->content_size = content_size;
		return (newlink);
	}

}