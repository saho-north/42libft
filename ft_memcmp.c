/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:24:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 21:56:34 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (!str1[i] && !str2[i])
			return (0);
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// char	*str0 = "ABC";
// char	*str1 = "ABD";
// char	*str2 = "AAA";
// char	*str3 = "ABCD";
// char	*str4 = "AB";
// char	*str5 = "B";
// char	*str6 = "A";

// int	main(void)
// {
// 	printf("memcmp    : ABC ABD   = %d\n", memcmp(str0, str1, 2));
// 	printf("ft_memcmp : ABC ABD   = %d\n\n", ft_memcmp(str0, str1, 2));
// 	printf("memcmp    : ABC ABC   = %d\n", memcmp(str0, str0, 10));
// 	printf("ft_memcmp : ABC ABC   = %d\n\n", ft_memcmp(str0, str0, 10));
// 	printf("memcmp    : ABC: AAA   = %d\n", memcmp(str0, str2, 2));
// 	printf("ft_memcmp : ABC: AAA   = %d\n\n", ft_memcmp(str0, str2, 2));
// 	printf("memcmp    : ABC: ABCD  = %d\n", memcmp(str0, str3, 2));
// 	printf("ft_memcmp : ABC: ABCD  = %d\n\n", memcmp(str0, str3, 2));
// 	printf("memcmp    : ABC: AB    = %d\n", memcmp(str0, str4, 2));
// 	printf("ft_memcmp : ABC: AB    = %d\n\n", ft_memcmp(str0, str4, 2));
// 	printf("memcmp    : ABC: B     = %d\n", memcmp(str0, str5, 2));
// 	printf("ft_memcmp : ABC: B     = %d\n\n", ft_memcmp(str0, str5, 2));
// 	printf("memcmp    : ABC: A     = %d\n", memcmp(str0, str6, 2));
// 	printf("ft_memcmp : ABC: A     = %d\n", ft_memcmp(str0, str6, 2));
// 	return (0);
// }
