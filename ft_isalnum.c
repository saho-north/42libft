/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 03:52:25 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/20 03:27:44 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

// void	compare_isalnum(int c)
// {
// 	int	isalnum_result;
// 	int	ft_isalnum_result;

// 	isalnum_result = isalnum(c);
// 	ft_isalnum_result = ft_isalnum(c);
// 	printf("Character: %c\n", c);
// 	printf("isalnum:   %d\n", isalnum_result);
// 	printf("ft_isalnum:%d\n", ft_isalnum_result);
// 	printf("\n");
// }

// int	main(void)
// {
// 	compare_isalnum('A'); // テストケース1: 大文字アルファベット
// 	compare_isalnum('5'); // テストケース2: 数字
// 	compare_isalnum('a'); // テストケース3: 小文字アルファベット
// 	compare_isalnum('%'); // テストケース4: アルファベットや数字ではない特殊文字
// 	compare_isalnum(' '); // テストケース5: スペース文字

// 	return (0);
// }
