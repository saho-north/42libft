/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:35:36 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 16:40:29 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		sample1[] = "ABCDEFGH";
char		sample2[] = "ABCDEFGH";
char		sample3[] = "ABCDEFGH";
char		sample4[] = "ABCDEFGH";
char		sample5[] = "ABCDEFGH";

static void	test_ft_memset(void *b, int c, size_t len)
{
	char	*result1;
	char	*result2;

	result1 = (char *)ft_memset(b, c, len);
	result2 = (char *)memset(b, c, len);
	printf("ft_memset = %s\n", result1);
	printf("memset    = %s\n", result2);
}

int	main(void)
{
	test_ft_memset((void *)sample1, 61, 3);
	test_ft_memset((void *)sample2, 61, 3);
	test_ft_memset((void *)sample3, 42, 1);
	test_ft_memset((void *)sample4, 42, 1);
	test_ft_memset((void *)sample5, 33, 8);
	return (0);
}
