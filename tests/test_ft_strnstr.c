/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:01:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 00:47:35 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		s1[] = "abcdefghijklmn";     /* 検索対象文字列 */
char		s2[] = "defgh";              /* 一致する場合 */
char		s3[] = "xyz";                /* 一致しない場合 */
char		s4[] = "abcdefghijklmnopqr"; /* 検索対象文字列より長い場合 */
char		s5[] = "";                   /* \0 */
char		*sp = 0;

static void	test_ft_strnstr(char *haystack, char *needle, size_t len)
{
	const char	*hst;
	const char	*ndl;

	hst = (const char *)haystack;
	ndl = (const char *)needle;
	printf("haystack = %s && needle = %s\n", hst, ndl);
	printf("ft_strnstr : %s\n", ft_strnstr(hst, ndl, len));
	printf("strnstr    : %s\n\n", strnstr(hst, ndl, len));
}

int	main(void)
{
	test_ft_strnstr(s1, s2, 50); /* 一致する場合 */
	test_ft_strnstr(s1, s3, 5);  /* 一致しない場合 */
	test_ft_strnstr(s1, s4, 5);  /* 検索対象文字列より長い場合 */
	test_ft_strnstr(s1, s5, 5);  /* \0 */
	test_ft_strnstr(((void *)0), "fake", 0);
	//test_ft_strnstr(((void *)0), "fake", 3);
	return (0);
}
