/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 13:10:01 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	return (dst);
}

char	src1[] = "ABCDEFG";
char	dst1[] = "aaaaaaaaaaa";
char	dst2[] = "aaaaaaaaaaa";

int	main(void)
{
	printf("ft_memcpy = %s\n", (char *)ft_memcpy(dst1, src1, 3));
	printf("memcpy    = %s\n", (char *)memcpy(dst2, src1, 3));
}
