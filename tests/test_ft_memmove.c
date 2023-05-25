/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:10:05 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 16:40:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		str1[] = "ABCDEFGHIJ";
char		str2[] = "ABCDEFGHIJ";
char		str3[] = "ABCDEFGHIJ";

static void	test_ft_memmove(void *dst, const void *src, size_t len)
{
	char	*result1;
	char	*result2;

	result1 = (char *)ft_memmove(dst, src, len);
	result2 = (char *)memmove(dst, src, len);
	printf("ft_memmove   = %s\n", result1);
	printf("lib_memmove  = %s\n", result2);
}

int	main(void)
{
	test_ft_memmove(str1, &str1[3], 3);
	test_ft_memmove(&str3[3], str3, 3);
	test_ft_memmove((void *)0, (void *)0, 5);
	return (0);
}
