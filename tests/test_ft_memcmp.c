/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:11:08 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/24 18:14:22 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_memcmp(char *s1, char *s2, size_t n)
{
	const void	*str1;
	const void	*str2;

	str1 = (const void *)s1;
	str2 = (const void *)s2;
	printf("memcmp    : %s - %s = %d\n", memcmp(str1, str2, 2));
	printf("ft_memcmp : %s - %s = %d\n\n", ft_memcmp(str1, str2, 2));
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;
	char	*str7;
	char	*str8;

	str1 = "ABC";
	str2 = "ABD";
	str3 = "AAA";
	str4 = "ABCD";
	str5 = "AB";
	str6 = "B";
	str7 = "A";
	str8 = "";
	printf("memcmp    : %s - %s   = %d\n", memcmp(str1, str2, 2));
	printf("ft_memcmp : %s - %s   = %d\n\n", ft_memcmp(str1, str2, 2));
	printf("memcmp    : ABC ABC   = %d\n", memcmp(str1, str1, 10));
	printf("ft_memcmp : ABC ABC   = %d\n\n", ft_memcmp(str1, str1, 10));
	printf("memcmp    : ABC: AAA   = %d\n", memcmp(str1, str3, 2));
	printf("ft_memcmp : ABC: AAA   = %d\n\n", ft_memcmp(str1, str3, 2));
	printf("memcmp    : ABC: ABCD  = %d\n", memcmp(str1, str4, 2));
	printf("ft_memcmp : ABC: ABCD  = %d\n\n", ft_memcmp(str1, str4, 2));
	printf("memcmp    : ABC: AB    = %d\n", memcmp(str1, str5, 2));
	printf("ft_memcmp : ABC: AB    = %d\n\n", ft_memcmp(str1, str5, 2));
	printf("memcmp    : ABC: B     = %d\n", memcmp(str1, str6, 2));
	printf("ft_memcmp : ABC: B     = %d\n\n", ft_memcmp(str1, str6, 2));
	printf("memcmp    : ABC: A     = %d\n", memcmp(str1, str7, 2));
	printf("ft_memcmp : ABC: A     = %d\n\n", ft_memcmp(str1, str7, 2));
	printf("memcmp    : ABC: \"\"    = %d\n", memcmp(str1, str8, 2));
	printf("ft_memcmp : ABC: \"\"    = %d\n\n", ft_memcmp(str1, str8, 2));
	printf("memcmp    : ABC: ABD   = %d\n", memcmp(str1, str2, 0));
	printf("ft_memcmp : ABC: ABD   = %d\n", ft_memcmp(str1, str2, 0));
	return (0);
}
