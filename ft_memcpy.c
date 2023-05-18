/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 17:37:21 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptrDest;
	char	*ptrSrc;

	ptrDest = (char *)dst;
	ptrSrc = (char *)src;
	if (ptrDest == NULL || ptrSrc == NULL)
	{
		return (NULL);
	}
	while (n--)
	{
		*(ptrDest++) = *(ptrSrc++);
	}
	return (dst);
}

// char	src[] = "ABCDEFG";
// char	dst1[] = "aaaaaaaaaaa";
// char	dst2[] = "aaaaaaaaaaa";

// int	main(void)
// {
// 	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst1, src, 3));
// 	printf("memcpy    = %s\n", (char *)memcpy(dst2, src, 3));
// }
