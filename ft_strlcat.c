/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:47:14 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/20 23:35:45 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	while (*dest)
		dest++;
	while (*src && destlen + i + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (destlen + srclen);
}

// char	dest1[20] = "ABCDE";
// char	src1[] = "1234";
// char	dest2[20] = "ABCDE";
// char	src2[] = "1234";
// char	dest3[20] = "ABCDE";
// char	src3[] = "1234";
// char	dest4[20] = "ABCDE";
// char	src4[] = "1234";
// char	dest5[20] = "ABCDE";
// char	src5[] = "1234";
// char	dest6[20] = "ABCDE";
// char	src6[] = "1234";

// int	main(void)
// {
// 	int		x;
// 	size_t	result1;
// 	size_t	resule2;
// 	int		y;
// 	size_t	result3;
// 	size_t	result4;
// 	int		z;
// 	size_t	result5;
// 	size_t	result6;

// 	x = 2;
// 	result1 = ft_strlcat(dest1, src1, x);
// 	printf("ft: %s: %zu\n", dest1, result1);
// 	resule2 = strlcat(dest2, src2, x);
// 	printf("lib %s: %zu\n", dest2, resule2);
// 	y = 7;
// 	result3 = ft_strlcat(dest3, src3, y);
// 	printf("ft: %s: %zu\n", dest3, result3);
// 	result4 = strlcat(dest4, src4, y);
// 	printf("lib %s: %zu\n", dest4, result4);
// 	z = 13;
// 	result5 = ft_strlcat(dest5, src5, z);
// 	printf("ft: %s: %zu\n", dest5, result5);
// 	result6 = strlcat(dest6, src6, z);
// 	printf("lib %s: %zu\n", dest6, result6);
// 	return (0);
// }
