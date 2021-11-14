/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:23:54 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/12 21:50:03 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static	int	ft_countstrings(char const *str, char delimeter)
{
	int		i;
	int		counted;
	int		result;

	counted = 0;
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while (str[i] != delimeter)
		{
			if (counted == 0)
			{
				result++;
				counted = 1;
			}
			i++;
		}
		counted = 0;
		i++;
	}
	return (result);
}
static	char	*ft_fillstring(char const *str, char delimeter)
{
	int		i;
	int		length;
	char	*returnstring;

	i = 0;
	length = 0;
	while (str[i] != delimeter && str[i] != '\0')
	{
		i++;
		length++;
	}
	returnstring = (char *)malloc(length * sizeof(char) + 1);
	if (!returnstring)
		return (NULL);
	i = 0;
	while (str[i] != delimeter && str[i] != '\0')
	{
		returnstring[i] = str[i];
		i++;
	}
	returnstring[i] = '\0';
	return (returnstring);
}
int	main(void)
{
	char *str = "";
//	char *testi;
	char **testi2;
	int i;

	i = 0;
//	printf("%i",ft_countstrings(str, 'a'));
//	testi = ft_fillstring(&str[3], 'a');
//	printf("%s", testi);
	testi2 = ft_strsplit(str, 'a');
	while (testi2[i] != 0)
	{
		printf("%s\n", testi2[i]);
		i++;
	}
	return (0);
}
char	**ft_strsplit(char const *s, int c)
{
	char	**strarray;
	int		stringcount;
	int		i;
	int		j;

	stringcount = ft_countstrings(s, c);
	strarray = (char **)malloc((stringcount + 1) * sizeof(char **));
	if (!strarray)
		return (NULL);
	i = 0;
	j = 0;
	while (stringcount > 0)
	{
		while (s[i] == c)
			i++;
		strarray[j] = ft_fillstring(&s[i], c);
		if (!strarray[j])
			return (NULL);
		while (s[i] != c)
			i++;
		j++;
		stringcount--;
	}
	strarray[j] = NULL;
	return (strarray);
}
