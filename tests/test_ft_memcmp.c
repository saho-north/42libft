/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:11:08 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/26 00:15:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_memcmp(char *s1, char *s2, size_t n)
{
	const void	*str1;
	const void	*str2;

	str1 = (const void *)s1;
	str2 = (const void *)s2;
	printf("[%s] - [%s] (%zu)\n", s1, s2, n);
	printf("ft_memcmp : %d\n", ft_memcmp(str1, str2, n));
	printf("memcmp    : %d\n\n", memcmp(str1, str2, n));
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

	str1 = "ABC";
	str2 = "ABD";
	str3 = "AAA";
	str4 = "ABCD";
	str5 = "AB";
	str6 = "B";
	str7 = "A";
	test_ft_memcmp(str1, str1, 3);
	test_ft_memcmp(str1, str2, 0);
	test_ft_memcmp(str1, str3, 2);
	test_ft_memcmp(str1, str4, 2);
	test_ft_memcmp(str1, str5, 2);
	test_ft_memcmp(str1, str6, 2);
	test_ft_memcmp(str1, str7, 2);
	//test_ft_memcmp(str1, "", 2);
	return (0);
}
