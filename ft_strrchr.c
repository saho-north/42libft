/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:00:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/22 15:58:33 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	to_find;
	size_t	len;

	str = (char *)s;
	to_find = (char)c;
	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		if (str[len - 1] == to_find)
			return (&str[len - 1]);
		len--;
	}
	return (0);
}

// void	test_case(const char *str, int c)
// {
// 	char	*result;

// 	result = ft_strrchr(str, c);
// 	printf("ft_strrchr '%c' in '%s': %s\n", c, str, result ? result : "NULL");
// 	result = strrchr(str, c);
// 	printf("strrchr    '%c' in '%s': %s\n", c, str, result ? result : "NULL");
// }

// int	main(void)
// {
// 	const char	*str5;
// 	const char	*str1;
// 	const char	*str2;
// 	const char	*str3;
// 	const char	*str4;

// 	str1 = "ABCDECFG";
// 	str2 = "Hello, World!";
// 	str3 = "abcdefg";
// 	str4 = "1234567890";
// 	str5 = "";
// 	test_case(str1, 'C');
// 	test_case(str2, 'o');
// 	test_case(str3, 'd');
// 	test_case(str4, '5');
// 	test_case(str5, 'A');
// 	return (0);
// }
