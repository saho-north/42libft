/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:00:00 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 17:29:03 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_atoi(char *str)
{
	int	actual;
	int	expected;

	actual = ft_atoi(str);
	expected = atoi(str);
	printf("original : %s\n", str);
	printf("actual   : %d\n", actual);
	printf("expected : %d\n", expected);
	if (actual == expected)
		printf("[OK]\n");
	else
		printf("[NG]\n");
	printf("\n");
}

int	main(void)
{
	test_ft_atoi("0");
	test_ft_atoi("      2147483647");
	test_ft_atoi("     -2147483648");
	test_ft_atoi("18446744073709551614");
	test_ft_atoi("18446744073709551615");
	test_ft_atoi("18446744073709551616");
	test_ft_atoi("9223372036854775806");
	test_ft_atoi("9223372036854775807");
	test_ft_atoi("-9223372036854775807");
	test_ft_atoi("-9223372036854775808");
	test_ft_atoi("22119223372036854775807");
	test_ft_atoi("-222119223372036854775808");
	test_ft_atoi("987654321");
	test_ft_atoi("\e06050");
	return (0);
}
