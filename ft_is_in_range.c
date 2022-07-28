/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:08:15 by lasalmi           #+#    #+#             */
/*   Updated: 2022/06/21 11:10:03 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_in_range(int nb, int start, int end)
{
	if (nb >= start && nb <= end)
		return (1);
	return (0);
}