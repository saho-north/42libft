/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:00:00 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/29 22:03:05 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_atoi(char *str)
{
	int	actual;
	int	expected;

	clock_t start, end;
	double my_atoi_time, system_atoi_time;
	start = clock();
	actual = ft_atoi(str);
	end = clock();
	my_atoi_time = ((double)(end - start)) / CLOCKS_PER_SEC;
	start = clock();
	expected = atoi(str);
	end = clock();
	system_atoi_time = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("input    : %s\n", str);
	printf("actual   : %d (%lf秒)\n", actual, my_atoi_time);
	printf("expected : %d (%lf秒)\n", expected, system_atoi_time);
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
