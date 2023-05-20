/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:19:33 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/20 12:07:35 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	else
		return (0);
}

// void	test_isprint(int c)
// {
// 	int	ft_result;
// 	int	result;

// 	ft_result = ft_isprint(c);
// 	result = isprint(c);
// 	printf("Character: %c\n", c);
// 	printf("ft_isprint: %d\n", ft_result);
// 	printf("isprint   : %d\n", result);
// 	printf("\n");
// }

// int	main(void)
// {
// 	test_isprint(' ');  // テストケース1: スペース文字
// 	test_isprint('~');  // テストケース2: チルダ文字
// 	test_isprint('\n'); // テストケース3: 改行文字
// 	test_isprint('A');  // テストケース4: 大文字アルファベット
// 	test_isprint('$');  // テストケース5: 特殊文字

// 	return (0);
// }
