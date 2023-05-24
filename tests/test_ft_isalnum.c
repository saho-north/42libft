/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:32:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 14:57:27 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isalnum(int c)
{
	int	actual;
	int	expected;

	actual = ft_isalnum(c);
	expected = isalnum(c);
	printf("Character to test: %c\n", c);
	printf("ft_isalnum : %d\n", actual);
	printf("isalnum    : %d\n", expected);
	printf("\n");
}

int	main(void)
{
	test_ft_isalnum('A'); // テストケース1: 大文字アルファベット
	test_ft_isalnum('5'); // テストケース2: 数字
	test_ft_isalnum('a'); // テストケース3: 小文字アルファベット
	test_ft_isalnum('%'); // テストケース4: アルファベットや数字ではない特殊文字
	test_ft_isalnum(' '); // テストケース5: スペース文字
	return (0);
}
