/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:56:34 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 12:21:25 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	to_find;
	size_t			i;

	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// char	text[] = "ABCDECFG";

// int	main(void)
// {
// 	char	*result1;
// 	char	*result2;

// 	// テストケース1: 'C' を検索
// 	result1 = (char *)ft_memchr(text, 'C', 5);
// 	result2 = (char *)memchr(text, 'C', 5);
// 	printf("ft_memchr for C : %s\n", result1);
// 	printf("memchr    for C : %s\n", result2);
// 	// テストケース2: 'F' を検索
// 	result1 = (char *)ft_memchr(text, 'F', 7);
// 	result2 = (char *)memchr(text, 'F', 7);
// 	printf("ft_memchr for F : %s\n", result1);
// 	printf("memchr    for F : %s\n", result2);
// 	// テストケース3: 'G' を検索
// 	result1 = (char *)ft_memchr(text, 'G', 8);
// 	result2 = (char *)memchr(text, 'G', 8);
// 	printf("ft_memchr for G : %s\n", result1);
// 	printf("memchr    for G : %s\n", result2);
// 	// テストケース4: 'Z' を検索 (存在しない文字)
// 	result1 = (char *)ft_memchr(text, 'Z', 7);
// 	result2 = (char *)memchr(text, 'Z', 7);
// 	printf("ft_memchr for Z : %s\n", result1);
// 	printf("memchr    for Z : %s\n", result2);
// 	return (0);
// }
