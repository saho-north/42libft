/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:45:13 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/20 23:42:47 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (*src && i + 1 < size)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
		*dest = '\0';
	}
	return (src_len);
}

// char	buf1[] = "A rabbit of commanding presence";
// char	s1[] = "Purple Bear";
// char	buf2[] = "A rabbit of commanding presence";
// char	s2[] = "Purple Bear";

// int	main(void)
// {
// 	printf("strlcpy-----%lu\n", strlcpy(buf1, s1, (size_t)sizeof(buf1)));
// 	printf("%s\n", buf1);
// 	printf("\nft_strlcpy--%zu\n", ft_strlcpy(buf2, s2, (size_t)sizeof(buf2)));
// 	printf("%s\n", buf2);
// 	printf("\nstrlcpy-----%lu\n", strlcpy(buf1, s1, 30));
// 	printf("%s\n", buf1);
// 	printf("\nft_strlcpy--%zu\n", ft_strlcpy(buf2, s2, 30));
// 	printf("%s\n", buf2);
// 	return (0);
// }
