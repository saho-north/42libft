/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:47:14 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 18:47:21 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ui_ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	i = 0;
	destlen = ui_ft_strlen(dest);
	srclen = ui_ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && destlen + i + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (destlen + srclen);
}

// char			dest1[20] = "ABCDE";
// char			src1[] = "1234";
// char			dest2[20] = "ABCDE";
// char			src2[] = "1234";
// char			dest3[20] = "ABCDE";
// char			src3[] = "1234";
// char			dest4[20] = "ABCDE";
// char			src4[] = "1234";
// char			dest5[20] = "ABCDE";
// char			src5[] = "1234";
// char			dest6[20] = "ABCDE";
// char			src6[] = "1234";

// int	main(void)
// {
// 	int				x;
// 	unsigned int	result1;
// 	unsigned int	resule2;
// 	int				y;
// 	unsigned int	result3;
// 	unsigned int	result4;
// 	int				z;
// 	unsigned int	result5;
// 	unsigned int	result6;

// 	x = 2;
// 	result1 = ft_strlcat(dest1, src1, x);
// 	printf("ft: %s: %u\n", dest1, result1);
// 	resule2 = strlcat(dest2, src2, x);
// 	printf("lib %s: %u\n", dest2, resule2);
// 	y = 7;
// 	result3 = ft_strlcat(dest3, src3, y);
// 	printf("ft: %s: %u\n", dest3, result3);
// 	result4 = strlcat(dest4, src4, y);
// 	printf("lib %s: %u\n", dest4, result4);
// 	z = 13;
// 	result5 = ft_strlcat(dest5, src5, z);
// 	printf("ft: %s: %u\n", dest5, result5);
// 	result6 = strlcat(dest6, src6, z);
// 	printf("lib %s: %u\n", dest6, result6);
// 	return (0);
// }
