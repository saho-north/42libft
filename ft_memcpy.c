/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 17:22:17 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*ptr;

	ptr = dst;
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		n--;
	}
	return (ptr);
}

// char	src[] = "ABCDEFG";
// char	dst1[] = "aaaaaaaaaaa";
// char	dst2[] = "aaaaaaaaaaa";

// int	main(void)
// {
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst1, src, 3));
// 	printf("memcpy    = %s\n", (char *)memcpy(dst2, src, 3));
// }
