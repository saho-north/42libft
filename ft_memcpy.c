/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 12:41:13 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (ptrdest == NULL || ptrsrc == NULL)
	{
		return (NULL);
	}
	while (n--)
	{
		*(ptrdest++) = *(ptrsrc++);
	}
	return (dst);
}

// char	src[] = "ABCDEFG";
// char	dst1[] = "aaaaaaaaaaa";
// char	dst2[] = "aaaaaaaaaaa";
// char	dst3[] = "aaaaaaaaaaa";
// char	dst4[] = "aaaaaaaaaaa";
// char	dst5[] = "aaaaaaaaaaa";
// char	dst6[] = "aaaaaaaaaaa";
// char	dst7[] = "aaaaaaaaaaa";
// char	dst8[] = "aaaaaaaaaaa";
// char	dst9[] = "aaaaaaaaaaa";
// char	dst10[] = "aaaaaaaaaaa";

// int	main(void)
// {
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst1, src, 3));
// 	printf("memcpy    = %s\n\n", (char *)memcpy(dst2, src, 3));
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst3, src, 7));
// 	printf("memcpy    = %s\n\n", (char *)memcpy(dst4, src, 7));
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst5, src, 0));
// 	printf("memcpy    = %s\n\n", (char *)memcpy(dst6, src, 0));
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst7, src, 10));
// 	printf("memcpy    = %s\n\n", (char *)memcpy(dst8, src, 10));
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst9, src, 5));
// 	printf("memcpy    = %s\n", (char *)memcpy(dst10, src, 5));
// 	return (0);
// }
