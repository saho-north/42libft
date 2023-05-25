/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:53:03 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 20:59:18 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			strncmp(const char *s1, const char *s2, size_t n);

const char	*str0 = "ABC";
const char	*str1 = "ABD";
const char	*str2 = "AAA";
const char	*str3 = "ABCD";
const char	*str4 = "AB";
const char	*str5 = "B";
const char	*str6 = "A";
const char	*str7 = "\200";
const char	*str8 = "\0";

static void	test_ft_strncmp(const char *s1, const char *s2, size_t n)
{
	printf("[%s] vs [%s]\n", s1, s2);
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp    : %d\n\n", strncmp(s1, s2, n));
}

int	main(void)
{
	test_ft_strncmp(str0, str0, 1000000);
	test_ft_strncmp(str0, str1, 2);
	test_ft_strncmp(str0, str2, 2);
	test_ft_strncmp(str0, str3, 2);
	test_ft_strncmp(str0, str4, 2);
	test_ft_strncmp(str0, str5, 2);
	test_ft_strncmp(str0, str6, 2);
	test_ft_strncmp(str7, str8, 1);
	return (0);
}
