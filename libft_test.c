/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:43:30 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/17 19:31:05 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cheat.h>
#include <cheats.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

CHEAT_TEST(bzerotest,

	char str1[] = "abcdefghij";
	char str2[] = "abcdefghij";
	char str3[] = "abcdefghij";
	char str4[] = "abcdefghij";
	char str5[] = "abcdefghij";
	char str6[] = "abcdefghij";
	char str7[] = "abcdefghij";
	char str8[] = "abcdefghij";
	
	bzero(str1, 10);
	ft_bzero(str2, 10);
	cheat_assert(memcmp(str1, str2, 10) == 0);
	ft_bzero(str3, 5);
	bzero(str4, 5);
	cheat_assert(memcmp(str3, str4, 10) == 0);
	ft_bzero(str5, 0);
	cheat_assert(memcmp(str5, str6, 10) == 0);
)

CHEAT_TEST(memcpytest,
	char str1[] = "abcdefghij";
	char str2[] = "dddddddddd";
	char str3[] = "abcdefghij";
	char str4[] = "dddddddddd";
	char str5[] = "abcdefghij";
	char str6[] = "dddddddddd";
	char str7[] = "abcdefghij";
	char str8[] = "dddddddddd";
	char str9[] = "abcdefghij";
	char str10[] = "dddddddddd";
	char str11[] = "abcdefghij";
	char str12[] = "dddddddddd";

	memcpy(str1, str2, 5);
	ft_memcpy(str3, str4, 5);
	cheat_assert(memcmp(str1, str3, 10) == 0);
	memcpy(str5, str6, 10);
	ft_memcpy(str7, str8, 10);
	cheat_assert(memcmp(str5, str7, 10) == 0);
	memcpy(str9, str10, 0);
	ft_memcpy(str11, str12, 0);
	cheat_assert(memcmp(str9, str11, 10) == 0);
)
CHEAT_TEST(memccpytest, 
	char str1[] = "abcdefghij";
	char str2[] = "dddddddddd";
	char str3[] = "abcdefghij";
	char str4[] = "dddddddddd";
	char str5[] = "abcdefghij";
	char str6[] = "dddddddddd";
	char str7[] = "abcdefghij";
	char str8[] = "dddddddddd";
	char str9[] = "";
	char str10[] = "dddddddddd";
	char str11[] = "";
	char str12[] = "dddddddddd";
	char str13[] = "abcdefghij";
	char str14[] = "dddddddddd";
	char str15[] = "abcdefghij";
	char str16[] = "dddddddddd";
	memccpy(str2, str1, 'f', 10);
	ft_memccpy(str4, str3, 'f', 10);
	cheat_assert_string(str2, str4);
	memccpy(str6, str5, 'p', 10);
	ft_memccpy(str8, str7, 'p', 10);
	cheat_assert_string(str6, str8);
	memccpy(str10, str9, 'p', 1);
	ft_memccpy(str12, str11, 'p', 1);
	cheat_assert_string(str10, str12);
	memccpy(str14, str13, 'p', 0);
	ft_memccpy(str16, str15, 'p', 0);
	cheat_assert_string(str10, str12);
)
CHEAT_TEST(memmovetest, 
	char str1[] = "abcdefghij";
	char str2[] = "dddddddddd";
	char str3[] = "abcdefghij";
	char str4[] = "dddddddddd";
	char str5[] = "abcdefghij";
	char str6[] = "dddddddddd";
	char str7[] = "abcdefghij";
	char str8[] = "dddddddddd";
	char str9[] = "abcdefghij";
	char str10[] = "dddddddddd";
	char str11[] = "abcdefghij";
	char str12[] = "dddddddddd";
	char str13[] = "abcdefghij";
	char str14[] = "";
	char str15[] = "abcdefghij";
	char str16[] = "";
	memmove(str1, &str1[1], 5);
	ft_memmove(str3, &str3[1], 5);
	cheat_assert_string(str1, str3);
	memmove(str5, str6, 10);
	ft_memmove(str7, str8, 10);
	cheat_assert_string(str5, str7);
	memmove(str9, str10, 10);
	ft_memmove(str11, str12, 10);
	cheat_assert_string(str9, str11);
	memmove(str13, str14, 1);
	ft_memmove(str15, str6, 1);
	cheat_assert(memcmp(str13, str15, 10) == 0);
)

CHEAT_TEST(memchrtest,
	char str1[] = "abcdefghij";
	char str2[] = "";
	cheat_assert_pointer(memchr(str1, 'e', 5),ft_memchr(str1, 'e', 5));
	cheat_assert_pointer(memchr(str1, 'e', 4),ft_memchr(str1, 'e', 4));
	cheat_assert_pointer(memchr(str1, 'p', 10),ft_memchr(str1, 'p', 10));
	cheat_assert_pointer(memchr(str1, 'p', 0),ft_memchr(str1, 'p', 0));
	cheat_assert_pointer(memchr(str2, 'e', 1),ft_memchr(str1, 'e', 1));
)

CHEAT_TEST(memcmptest,
	int	a = 500;
	int b = 499;
	char str[] = "abcdefg";
	char str2[] = "abcdeff";
	char str3[] = "";
	char str4[] = "";

	cheat_assert(memcmp(&a, &a, 4) == ft_memcmp(&a, &a, 4));
	cheat_assert(memcmp(&a, &b, 4) == ft_memcmp(&a, &b, 4));
	cheat_assert(memcmp(str, str2, 7) == ft_memcmp(str, str2, 7));
	cheat_assert(memcmp(str, str3, 7) == ft_memcmp(str, str3, 7));
)

CHEAT_TEST(strlentest,
	char str[] = "abcdefg";
	char str2[] = "abcd";
	char str3[] = "abcde";
	char str4[] = "abcdef";
	char str5[] = "abcdefg";
	char str6[] = "";

	cheat_assert(strlen(str) == ft_strlen(str));
	cheat_assert(strlen(str2) == ft_strlen(str2));
	cheat_assert(strlen(str3) == ft_strlen(str3));
	cheat_assert(strlen(str4) == ft_strlen(str4));
	cheat_assert(strlen(str5) == ft_strlen(str5));
	cheat_assert(strlen(str6) == ft_strlen(str6));
)

CHEAT_TEST(strduptest,
	char str[] = "abcdefg";
	char str2[] = "";
	
	cheat_assert_string(strdup(str), ft_strdup(str));
	cheat_assert_string(strdup(str2), ft_strdup(str2));
)

CHEAT_TEST(strcpytest,
	char	str[] = "TRALLALAA";
	char	str2[10];
	char	str3[10];
	char	str6[] = "TRALLALAA";
	char	str7[] = "TRALLALAA";
	char	str4[] = "laaaaaa";
	char	str5[] = "";

	cheat_assert_string(strcpy(str2, str),ft_strcpy(str3, str));
	cheat_assert_string(strcpy(str6, str5),ft_strcpy(str7, str5));
	
)

CHEAT_TEST(strncpytest,
	char	str[] = "TRALLALAA";
	char	str2[10];
	char	str3[10];
	char	str4[] = "";
	cheat_assert_string(strncpy(str2, str, 10), ft_strncpy(str3, str, 10));
	cheat_assert_string(strncpy(str2, str, 5), ft_strncpy(str3, str, 5));
	cheat_assert_string(strncpy(str2, str4, 1), ft_strncpy(str3, str4, 1));

)

