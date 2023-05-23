/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 01:44:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 00:53:00 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;
	size_t	buf_size;

	buf = NULL;
	if (SIZE_MAX / count < size && count > 0 && size > 0)
	{
		return (NULL);
	}
	buf_size = count * size;
	buf = (void *)malloc(buf_size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, buf_size);
	return (buf);
}

// void	check_calloc(int no, size_t cnt, size_t size)
// {
// 	void	*actual;
// 	void	*expected;

// 	actual = calloc(cnt, size);
// 	expected = calloc(cnt, size);
// 	printf("No. %d actual :%p\nNo. %d expected : %p\nsize = %lu\n\n", no,
// 			actual, no + 1, expected, cnt * size);
// 	if (actual)
// 		free(actual);
// }

// int	main(void)
// {
// 	/* 1,2 */ check_calloc(1, 0, 0);
// 	/* 3,4 */ check_calloc(3, 1, 0);
// 	/* 5,6 */ check_calloc(5, 0, 1);
// 	/* 7,8 */ check_calloc(7, 1, 1);
// 	/* 9,10 */ check_calloc(9, 42, 1);
// 	/* 11,12 */ check_calloc(11, 1, 42);
// 	/* 13,14 */ check_calloc(13, 42, 42);
// 	/* 15,16 overflow */ check_calloc(15, (size_t)SIZE_MAX / 10 + (size_t)1,
// 			10);
// 	/* 17,18 too big 1*/ check_calloc(17, LONG_MAX, 1);
// 	/* 19,20 too big 2*/ check_calloc(19, ULONG_MAX, 1);
// 	/* 21,22 too big 3*/ check_calloc(21, SIZE_MAX, 1);
// 	/* 23,24 very big 1*/ check_calloc(23, INT_MAX, 1);
// 	/* 25,26 very big 2*/ check_calloc(25, UINT_MAX, 1);
// 	return (0);
// }
