/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/20 12:57:58 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// char	str3[] = "ABCDEFGHIJ";

// int	main(void)
// {
// 	// テストケース1: オーバーラップがない場合
// 	printf("ft_memmove = %s\n", (char *)ft_memmove(str1, &str1[3], 3));
// 	printf("memmove    = %s\n\n", (char *)memmove(str2, &str2[3], 3));
// 	// テストケース2: オーバーラップがある場合
// 	printf("ft_memmove = %s\n", (char *)ft_memmove(&str3[3], str3, 3));
// 	printf("memmove    = %s\n", (char *)memmove(&str3[3], str3, 3));
// 	return (0);
// }
