/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:02:20 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 15:06:28 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isascii(int c)
{
	int	actual;
	int	expected;

	actual = ft_isascii(c);
	expected = isascii(c);
	printf("Character to test: '%c' (%d)\n", (char)c, c);
	printf("ft_isascii : %d\n", actual);
	printf("isascii    : %d\n", expected);
	printf("\n");
}

int	main(void)
{
	test_ft_isascii(0);
	test_ft_isascii(32);
	test_ft_isascii(65);
	test_ft_isascii(97);
	test_ft_isascii(126);
	test_ft_isascii(-1);
	test_ft_isascii(128);
	test_ft_isascii(255);
	test_ft_isascii(500);
	return (0);
}
