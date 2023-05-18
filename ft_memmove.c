/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 18:31:37 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (ptrdest == NULL || ptrsrc == NULL)
	{
		return (NULL);
	}
	while (len > 0)
	{
		if (&ptrdest[len - 1] != NULL && &ptrsrc[len - 1] != NULL)
			ptrdest[len - 1] = ptrsrc[len - 1];
		len--;
	}
	return (dst);
}

// char	str1[] = "ABCDEFGHIJ";
// char	str2[] = "ABCDEFGHIJ";

// int	main(void)
// {
// 	printf("ft_memmove = %s\n", (char *)ft_memmove(str1, &str1[3], 3));
// 	printf("memmove    = %s\n", (char *)memmove(str2, &str2[3], 3));
// }
