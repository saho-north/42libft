/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/22 14:25:57 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrdest;
	char	*ptrsrc;
	size_t	index;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (ptrdest == NULL && ptrsrc == NULL)
	{
		return (NULL);
	}
	if (dst > src)
	{
		while (len > 0)
		{
			if (&ptrdest[len - 1] != NULL && &ptrsrc[len - 1] != NULL)
				ptrdest[len - 1] = ptrsrc[len - 1];
			len--;
		}
	}
	else
	{
		index = 0;
		while (index < len)
		{
			if (&ptrdest[index] != NULL && &ptrsrc[index] != NULL)
				ptrdest[index] = ptrsrc[index];
			index++;
		}
	}
	return (dst);
}

// char	str1[] = "ABCDEFGHIJ";
// char	str2[] = "ABCDEFGHIJ";
// char	str3[] = "ABCDEFGHIJ";

// int	main(void)
// {
// 	printf("ft_memmove = %s\n", (char *)ft_memmove(str1, &str1[3], 3));
// 	printf("memmove    = %s\n", (char *)memmove(str2, &str2[3], 3));
// 	printf("ft_memmove = %s\n", (char *)ft_memmove(&str3[3], str3, 3));
// 	printf("memmove    = %s\n", (char *)memmove(&str3[3], str3, 3));
// 	printf("ft_ = %s\n", (char *)ft_memmove(((void *)0), ((void *)0), 5));
// 	printf("lib = %s\n", (char *)memmove(((void *)0), ((void *)0), 5));
// 	return (0);
// }
