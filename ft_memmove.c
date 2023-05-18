/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 18:24:15 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrDest;
	char	*ptrSrc;

	ptrDest = (char *)dst;
	ptrSrc = (char *)src;
	if (ptrDest == NULL || ptrSrc == NULL)
	{
		return (NULL);
	}
	while (len)
	{
		if (ptrDest[len] != NULL && ptrSrc[len] != NULL)
			ptrDest[len] = ptrSrc[len];
		len--;
	}
	return (dst);
}

char	str1[] = "ABCDEFGHIJ";
char	str2[] = "ABCDEFGHIJ";

int	main(void)
{
	printf("ft_memmove = %s\n", (char *)ft_memmove(str1, str1[3], 3));
	printf("memmove    = %s\n", (char *)memmove(str2, str2[3], 3));
}
