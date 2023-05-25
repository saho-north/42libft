/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:20:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 17:33:40 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		dest1[20] = "ABCDE";
char		dest2[20] = "ABCDE";
char		dest3[20] = "ABCDE";
char		dest4[20] = "ABCDE";
char		dest5[20] = "ABCDE";
char		dest6[20] = "ABCDE";
char		*src = "1234";
char		b[0xF] = "nyan !";

static void	test_ft_strlcat(char *dst1, char *dst2, char *src, size_t size)
{
	size_t	result1;
	size_t	result2;

	result1 = ft_strlcat(dst1, src, size);
	result2 = strlcat(dst2, src, size);
	printf("ft_strlcat : %s -> %zu\n", dst1, result1);
	printf("strlcat    : %s -> %zu\n\n", dst2, result2);
}

int	main(void)
{
	test_ft_strlcat(dest1, dest2, src, 2);
	test_ft_strlcat(dest3, dest4, src, 7);
	test_ft_strlcat(dest5, dest6, src, 13);
	test_ft_strlcat(dest5, dest6, src, 13);
	test_ft_strlcat((void *)0, (void *)0, b, 0);
	// test_ft_strlcat(b, b, ((void *)0), 2);
	return (0);
}
