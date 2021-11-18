/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:43:30 by lasalmi           #+#    #+#             */
/*   Updated: 2021/11/18 15:03:04 by lasalmi          ###   ########.fr       */
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

CHEAT_TEST(strcattest,
	char	src[] = "Testing";
	char	src2[] = "Test";
	char	src3[] = "Tes";
	char	src4[] = "";
	char	dest[15] = "Really?";
	char	dest2[15] = "Really?";
	char	dest3[15] = "Really?";
	char	dest4[15] = "Really?";
	char	dest5[15] = "Really?";
	char	dest6[15] = "Really?";

	cheat_assert_string(strcat(dest, src), ft_strcat(dest2, src));
	cheat_assert_string(strcat(dest3, src2), ft_strcat(dest4, src2));
	cheat_assert_string(strcat(dest5, src4), ft_strcat(dest6, src4));
	)
CHEAT_TEST(strncattest,
	char	src[] = "Testing";
	char	src2[] = "Test";
	char	src3[] = "Tes";
	char	src4[] = "";
	char	dest[15] = "Really?";
	char	dest2[15] = "Really?";
	char	dest3[15] = "Really?";
	char	dest4[15] = "Really?";
	char	dest5[15] = "Really?";
	char	dest6[15] = "Really?";

	cheat_assert_string(strncat(dest, src, 6), ft_strncat(dest2, src, 6));
	cheat_assert_string(strncat(dest3, src2, 2), ft_strncat(dest4, src2, 2));
	cheat_assert_string(strncat(dest5, src4, 0), ft_strncat(dest6, src4, 0));
	)
	
CHEAT_TEST(strlcattest,
	char	src[] = "Testing";
	char	src2[] = "Test";
	char	src3[] = "Tes";
	char	src4[] = "";
	char	dest[15] = "Really?";
	char	dest2[15] = "Really?";
	char	dest3[15] = "Really?";
	char	dest4[15] = "Really?";
	char	dest5[15] = "Really?";
	char	dest6[15] = "Really?";

	cheat_assert(strlcat(dest, src, 15) == ft_strlcat(dest2, src, 15));
	cheat_assert_string(dest, dest2);
	cheat_assert(strlcat(dest3, src2, 15) == ft_strlcat(dest4, src2, 15));
	cheat_assert_string(dest3, dest4);
	cheat_assert(strlcat(dest5, src4, 0) == ft_strlcat(dest6, src4, 0));
	cheat_assert_string(dest5, dest6);
)

CHEAT_TEST(strchrtest,
	char	str[] = "abcdefghijklmopq";
	char	str2[] = "";
	char	to_search = 'a';
	char	to_search2 = 'h';
	char	to_search3 = 'q';
	char	to_search4 = 0;

	cheat_assert_pointer(strchr(str, to_search), ft_strchr(str, to_search));
	cheat_assert_pointer(strchr(str, to_search2), ft_strchr(str, to_search2));
	cheat_assert_pointer(strchr(str, to_search3), ft_strchr(str, to_search3));
	cheat_assert_pointer(strchr(str, to_search4), ft_strchr(str, to_search4));
	cheat_assert_pointer(strchr(str2, to_search4), ft_strchr(str2, to_search4));
	cheat_assert_pointer(strchr(str2, to_search3), ft_strchr(str2, to_search3));

)

CHEAT_TEST(strrchrtest,
	char	str[] = "abhcdqefghijklmopq";
	char	str2[] = "";
	char	to_search = 'a';
	char	to_search2 = 'h';
	char	to_search3 = 'q';
	char	to_search4 = 0;

	cheat_assert_pointer(strchr(str, to_search), ft_strchr(str, to_search));
	cheat_assert_pointer(strchr(str, to_search2), ft_strchr(str, to_search2));
	cheat_assert_pointer(strchr(str, to_search3), ft_strchr(str, to_search3));
	cheat_assert_pointer(strchr(str, to_search4), ft_strchr(str, to_search4));
	cheat_assert_pointer(strchr(str2, to_search4), ft_strchr(str2, to_search4));
	cheat_assert_pointer(strchr(str2, to_search3), ft_strchr(str2, to_search3));

)

CHEAT_TEST(strstrtest, 
	char	haystack[] ="this is the really really big haystack that has reallly much of HAY";

	char	needle[] = "HAY";
	char	needle2[] = "reallly much";
	char	needle3[] = "not found";
	char	needle4[] = "";
	
	cheat_assert_pointer(strstr(haystack, needle), ft_strstr(haystack, needle));
	cheat_assert_pointer(strstr(haystack, needle2), ft_strstr(haystack, needle2));
	cheat_assert_pointer(strstr(haystack, needle3), ft_strstr(haystack, needle3));
	cheat_assert_pointer(strstr(haystack, needle4), ft_strstr(haystack, needle4));
)

CHEAT_TEST(strnstrtest, 
	char	haystack[] ="this is the really really big haystack that has reallly much of HAY";

	char	needle[] = "HAY";
	char	needle2[] = "reallly much";
	char	needle3[] = "not found";
	char	needle4[] = "";
	
	cheat_assert_pointer(strnstr(haystack, needle, 67), ft_strnstr(haystack, needle, 67));
	cheat_assert_pointer(strnstr(haystack, needle2, 30), ft_strnstr(haystack, needle2, 30));
	cheat_assert_pointer(strnstr(haystack, needle3, 67), ft_strnstr(haystack, needle3, 67));
	cheat_assert_pointer(strnstr(haystack, needle4,67), ft_strnstr(haystack, needle4, 67));

)

CHEAT_TEST(strcmptest, 
	char	str[] = "this is a string for comparison";
	char	str2[] = "this is a string";
	char	str3[] = "this is something to compare";
	char	str4[] = "";

	cheat_assert(strcmp(str,str) == ft_strcmp(str,str));
	cheat_assert(strcmp(str,str2) == ft_strcmp(str,str2));
	cheat_assert(strcmp(str,str3) == ft_strcmp(str,str3));
	cheat_assert(strcmp(str4,str) == ft_strcmp(str4,str));
	cheat_assert(strcmp(str,str4) == ft_strcmp(str,str4));
	cheat_assert(strcmp(str4,str4) == ft_strcmp(str4,str4));
	
)

CHEAT_TEST(strncmptest,
	char	str[] = "this is a string for comparison";
	char	str2[] = "this is a string";
	char	str5[] = "string";
	char	str3[] = "this is something to compare";
	char	str4[] = "";

	cheat_assert(strncmp(str,str, 10) == ft_strncmp(str,str, 10));
	cheat_assert(strncmp(str,str2, 10) == ft_strncmp(str,str2, 10));
	cheat_assert(strncmp(str,str3, 20) == ft_strncmp(str,str3, 20));
	cheat_assert(strncmp(str4,str, 40) == ft_strncmp(str4,str, 40));
	cheat_assert(strncmp(str,str, 40) == ft_strncmp(str,str, 40));
	cheat_assert(strncmp(str4,str4, 40) == ft_strncmp(str4,str4, 40));
	cheat_assert(strncmp(str,str5, 15) == ft_strncmp(str,str5, 15));
	cheat_assert(strncmp(str,str5, 16) == ft_strncmp(str,str5, 16));
	cheat_assert(strncmp(str,str5, 17) == ft_strncmp(str,str5, 17));
)

CHEAT_TEST(atoitest,
	char	str[] = "-------000012345";
	char	str2[] = "0000123-45";
	char	str3[] = "+123450000";
	char	str4[] = "++++++++000012345";
	char	str5[] = "0000b12345";
	char	str6[] = "b000012345";
	char	str7[] = "          000012345    ";
	char	str8[] = "\n\n\n\n\t\t\t000012345";
	char	str9[] = "000012345";
	char	str10[] = "           -2147483648       ";
	char	str11[] = "2147483647";
	
	cheat_assert(atoi(str) == ft_atoi(str));
	cheat_assert(atoi(str2) == ft_atoi(str2));
	cheat_assert(atoi(str3) == ft_atoi(str3));
	cheat_assert(atoi(str4) == ft_atoi(str4));
	cheat_assert(atoi(str5) == ft_atoi(str5));
	cheat_assert(atoi(str6) == ft_atoi(str6));
	cheat_assert(atoi(str7) == ft_atoi(str7));
	cheat_assert(atoi(str8) == ft_atoi(str8));
	cheat_assert(atoi(str9) == ft_atoi(str9));
	cheat_assert(atoi(str10) == ft_atoi(str10));
	cheat_assert(atoi(str11) == ft_atoi(str11));
)

CHEAT_TEST(issomethingtest,
	int c = -500;
	while (c <= 600)
	{
		cheat_assert(isalpha(c) == ft_isalpha(c));
//		printf("Isalnum: %i FT: %i VALUE: %i \n", isdigit(c), ft_isdigit(c), c);
		cheat_assert(isdigit(c) == ft_isdigit(c));
		cheat_assert(isalnum(c) == ft_isalnum(c));
		cheat_assert(isascii(c) == ft_isascii(c));
		cheat_assert(isprint(c) == ft_isprint(c));
		c++;
	}
)
CHEAT_TEST(islowerupper,
	int	a;

	a = -100;
	while (a < 300)
	{
		cheat_assert(tolower(a) == ft_tolower(a));
		cheat_assert(toupper(a) == ft_toupper(a));
		a++;
	}
)