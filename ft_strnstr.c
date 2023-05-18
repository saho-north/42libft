/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:56:51 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 22:12:02 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	size_t	head;
	size_t	i;

	if (*needle == '\0')
		return (haystack);
	head = 0;
	while (haystack[head] && head < len)
	{
		i = 0;
		while (haystack[head + i] == needle[i] && head + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&haystack[head]);
		}
		head++;
	}
	return (0);
}

// char	s1[] = "abcdefghijklmn";     /* 検索対象文字列 */
// char	s2[] = "defgh";              /* 一致する場合 */
// char	s3[] = "xyz";                /* 一致しない場合 */
// char	s4[] = "abcdefghijklmnopqr"; /* 検索対象文字列より長い場合 */
// char	s5[] = "";                   /* \0 */
// char	*sp;
// int	main(void)
// {
// 	puts("strnstr:");
// 	sp = strnstr(s1, s2, 50);
// 	printf("一致する場合 : %s\n", sp);
// 	sp = strnstr(s1, s3, 5);
// 	printf("一致しない場合 : %s\n", sp);
// 	sp = strnstr(s1, s4, 5);
// 	printf("検索対象文字列より長い場合 : %s\n", sp);
// 	sp = strnstr(s1, s5, 5);
// 	printf("\\0 : %s\n", sp);
// 	printf("\n");
// 	puts("ft_strnstr:");
// 	sp = ft_strnstr(s1, s2, 50);
// 	printf("一致する場合 : %s\n", sp);
// 	sp = ft_strnstr(s1, s3, 5);
// 	printf("一致しない場合 : %s\n", sp);
// 	sp = ft_strnstr(s1, s4, 5);
// 	printf("検索対象文字列より長い場合 : %s\n", sp);
// 	sp = ft_strnstr(s1, s5, 5);
// 	printf("\\0 : %s\n", sp);
// 	return (0);
// }
