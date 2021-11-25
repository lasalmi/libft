/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:09:13 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/25 15:13:13 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*old_head;
	t_list	*new_head;

	old_head = *alst;
	new_head = new;

	new_head->next = *alst;
	*alst = new_head;
}
