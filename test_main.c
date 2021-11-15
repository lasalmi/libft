/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:41:12 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/15 11:32:11 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define INT_NEG -2000;
#define INT_POS 50000;
#define ZERO = 0;

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*emptystr = "";
char	*tenstr = "ten chars";
char	*twentystr = "twenty characters 20";
char	*estr;
char	*estr2;
int		errors = 0;
int		i = 0;
int	main(void)
{
	char	*str;
	char	str2;
	char	yn;

	str = strdup(tenstr);
	
	puts("Testing ft_memset");
	ft_memset(str, 'a', 9);
	printf ("Should be 9 a's: %s \n", str);
	printf ("Are they a match? [y/n] \n");
	scanf(" %c", &yn);
	if (yn != 'y' && yn != 'n')
	{
		printf ("Are they a match? [y/n \n");
		scanf("%c", &yn);
	}
	if (yn == 'n')
		errors++;

	puts("Testing ft_bzero");
	str = strdup(tenstr);
	ft_bzero(str, 9);
	while (str[i] == 0 && i < 10)
		i++;
	if (i != 10)
	{
		puts("Bzero error");
		errors++;
	}
	else
		puts("Bzero ok");
// THIS IS FT_STRSPLIT MAIN
//	char *str = "";
//	char *testi;
//	char **testi2;
//	int i;

//	i = 0;
//	printf("%i",ft_countstrings(str, 'a'));
//	testi = ft_fillstring(&str[3], 'a');
//	printf("%s", testi);
//	testi2 = ft_strsplit(str, 'a');
//	while (testi2[i] != 0)
//	{
//		printf("%s\n", testi2[i]);
//		i++;
//	}
//	return (0);
//}
}