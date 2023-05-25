/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:30:58 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 16:38:49 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		src[] = "ABCDEFG";
char		dst1[] = "aaaaaaaaaaa";
char		dst2[] = "aaaaaaaaaaa";
char		dst3[] = "aaaaaaaaaaa";
char		dst4[] = "aaaaaaaaaaa";
char		dst5[] = "aaaaaaaaaaa";
char		dst6[] = "aaaaaaaaaaa";
char		dst7[] = "aaaaaaaaaaa";
char		dst8[] = "aaaaaaaaaaa";
char		dst9[] = "aaaaaaaaaaa";
char		dst10[] = "aaaaaaaaaaa";

static void	test_ft_memcpy(void *dest1, void *dest2, const void *src, size_t n)
{
	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dest1, src, n));
	printf("memcpy    = %s\n\n", (char *)memcpy(dest2, src, n));
}

int	main(void)
{
	test_ft_memcpy(dst1, dst2, src, 3);
	test_ft_memcpy(dst3, dst4, src, 7);
	test_ft_memcpy(dst5, dst6, src, 0);
	test_ft_memcpy(dst7, dst8, src, 10);
	test_ft_memcpy(dst9, dst10, src, 5);
	test_ft_memcpy((void *)0, (void *)0, (void *)0, 3);
	return (0);
}
