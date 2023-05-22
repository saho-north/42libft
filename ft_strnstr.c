/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:56:51 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/22 23:12:07 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	head;
	size_t	i;

	ptr = (char *)haystack;
	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0')
		return (ptr);
	head = 0;
	while (ptr[head] && head < len)
	{
		i = 0;
		while (ptr[head + i] == needle[i] && head + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&ptr[head]);
		}
		head++;
	}
	return (0);
}

// const char	s1[] = "abcdefghijklmn";     /* 検索対象文字列 */
// const char	s2[] = "defgh";              /* 一致する場合 */
// const char	s3[] = "xyz";                /* 一致しない場合 */
// const char	s4[] = "abcdefghijklmnopqr"; /* 検索対象文字列より長い場合 */
// const char	s5[] = "";                   /* \0 */
// char		*sp = NULL;
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
// 	sp = strnstr(((void *)0), "fake", 0);
// 	printf("null is sent with a size of 0 : %s\n\n", sp);
// 	//sp = strnstr(((void *)0), "fake", 3);
// 	printf("null is sent : %s\n", sp);
// 	puts("ft_strnstr:");
// 	sp = ft_strnstr(s1, s2, 50);
// 	printf("一致する場合 : %s\n", sp);
// 	sp = ft_strnstr(s1, s3, 5);
// 	printf("一致しない場合 : %s\n", sp);
// 	sp = ft_strnstr(s1, s4, 5);
// 	printf("検索対象文字列より長い場合 : %s\n", sp);
// 	sp = ft_strnstr(s1, s5, 5);
// 	printf("\\0 : %s\n", sp);
// 	sp = ft_strnstr(((void *)0), "fake", 0);
// 	printf("null is sent with a size of 0 : %s\n", sp);
// 	//sp = ft_strnstr(((void *)0), "fake", 3);
// 	printf("null is sent : %s\n", sp);
// 	return (0);
// }
