/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:37:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/21 16:54:16 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	chara;

	str = (unsigned char *)b;
	chara = (unsigned char)c;
	while (len > 0)
	{
		*str = chara;
		str++;
		len--;
	}
	return (b);
}

// char	sample1[] = "ABCDEFGH";
// char	sample2[] = "ABCDEFGH";
// char	sample3[] = "ABCDEFGH";
// char	sample4[] = "ABCDEFGH";
// char	sample5[] = "ABCDEFGH";

// int	main(void)
// {
// 	// テストケース1: 指定した範囲の文字列を指定した値で埋める
// 	ft_memset((void *)sample1, 61, 3);
// 	printf("ft_memset = %s\n", sample1);
// 	memset((void *)sample2, 61, 3);
// 	printf("memset    = %s\n\n", sample2);
// 	// テストケース2: 先頭の1文字のみを指定した値で埋める
// 	ft_memset((void *)sample3, 42, 1);
// 	printf("ft_memset = %s\n", sample3);
// 	memset((void *)sample4, 42, 1);
// 	printf("memset    = %s\n\n", sample4);
// 	// テストケース3: 全ての文字を指定した値で埋める
// 	ft_memset((void *)sample5, 33, 8);
// 	printf("ft_memset = %s\n", sample5);
// 	memset((void *)sample5, 33, 8);
// 	printf("memset    = %s\n", sample5);
// 	return (0);
// }
