/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:24:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 12:32:36 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;
// 	char	*str5;
// 	char	*str6;
// 	char	*str7;
// 	char	*str8;

// 	str1 = "ABC";
// 	str2 = "ABD";
// 	str3 = "AAA";
// 	str4 = "ABCD";
// 	str5 = "AB";
// 	str6 = "B";
// 	str7 = "A";
// 	str8 = "";
// 	printf("memcmp    : ABC ABD   = %d\n", memcmp(str1, str2, 2));
// 	printf("ft_memcmp : ABC ABD   = %d\n\n", ft_memcmp(str1, str2, 2));
// 	printf("memcmp    : ABC ABC   = %d\n", memcmp(str1, str1, 10));
// 	printf("ft_memcmp : ABC ABC   = %d\n\n", ft_memcmp(str1, str1, 10));
// 	printf("memcmp    : ABC: AAA   = %d\n", memcmp(str1, str3, 2));
// 	printf("ft_memcmp : ABC: AAA   = %d\n\n", ft_memcmp(str1, str3, 2));
// 	printf("memcmp    : ABC: ABCD  = %d\n", memcmp(str1, str4, 2));
// 	printf("ft_memcmp : ABC: ABCD  = %d\n\n", ft_memcmp(str1, str4, 2));
// 	printf("memcmp    : ABC: AB    = %d\n", memcmp(str1, str5, 2));
// 	printf("ft_memcmp : ABC: AB    = %d\n\n", ft_memcmp(str1, str5, 2));
// 	printf("memcmp    : ABC: B     = %d\n", memcmp(str1, str6, 2));
// 	printf("ft_memcmp : ABC: B     = %d\n\n", ft_memcmp(str1, str6, 2));
// 	printf("memcmp    : ABC: A     = %d\n", memcmp(str1, str7, 2));
// 	printf("ft_memcmp : ABC: A     = %d\n\n", ft_memcmp(str1, str7, 2));
// 	printf("memcmp    : ABC: \"\"    = %d\n", memcmp(str1, str8, 2));
// 	printf("ft_memcmp : ABC: \"\"    = %d\n\n", ft_memcmp(str1, str8, 2));
// 	printf("memcmp    : ABC: ABD   = %d\n", memcmp(str1, str2, 0));
// 	printf("ft_memcmp : ABC: ABD   = %d\n", ft_memcmp(str1, str2, 0));
// 	return (0);
// }
