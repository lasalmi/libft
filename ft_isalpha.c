/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:13:20 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 12:16:49 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c)
{
	unsigned char	char_to_compare;

	char_to_compare = (unsigned char)c;
	if (char_to_compare >= 65 && char_to_compare <= 90)
		return (1);
	if (char_to_compare >= 97 && char_to_compare <= 122)
		return (1);
	return (0);
}