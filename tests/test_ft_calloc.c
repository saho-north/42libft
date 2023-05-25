/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:26:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 00:04:48 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_calloc(size_t cnt, size_t size)
{
	void	*actual;
	void	*expected;

	actual = ft_calloc(cnt, size);
	expected = calloc(cnt, size);
	printf("cnt = %lu, size = %lu\ncnt * size = %lu\n", cnt, size, cnt * size);
	printf("actual   : %p\n", actual);
	printf("expected : %p\n", expected);
	printf("\n");
	if (actual)
		free(actual);
	if (expected)
		free(expected);
}

int	main(void)
{
	/* 1,2 */ test_ft_calloc(0, 0);
	/* 3,4 */ test_ft_calloc(1, 0);
	/* 5,6 */ test_ft_calloc(0, 1);
	/* 7,8 */ test_ft_calloc(1, 1);
	/* 9,10 */ test_ft_calloc(42, 1);
	/* 11,12 */ test_ft_calloc(1, 42);
	/* 13,14 */ test_ft_calloc(42, 42);
	/* 23,24 very big 1*/ test_ft_calloc(INT_MAX, 1);
	/* 25,26 very big 2*/ test_ft_calloc(UINT_MAX, 1);
	/* overflow */
	// test_ft_calloc(15, (size_t)SIZE_MAX / 10 + (size_t)1, 10);
	// test_ft_calloc(17, LONG_MAX, 1);
	// test_ft_calloc(19, ULONG_MAX, 1);
	// test_ft_calloc(21, SIZE_MAX, 1);
	return (0);
}
