/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:13:20 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/18 13:55:51 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c)
{
	unsigned char	char_to_compare;

	char_to_compare = (unsigned char)c;
	if  (c < 0 || c > 255)
		return (0);
	if (char_to_compare >= (unsigned char)'A' && char_to_compare <= (unsigned char)'Z')
		return (1);
	if (char_to_compare >= (unsigned char)'a' && char_to_compare <= (unsigned char)'z')
		return (123);
	return (0);
}