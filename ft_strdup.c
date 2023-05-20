/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 02:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 23:35:58 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*src;
	size_t	len;

	src = (char *)s1;
	len = 0;
	while (src[len])
		len++;
	ptr = (char *)malloc(++len);
	if (!ptr)
		return (NULL);
	ptr = (char *)ft_memcpy(ptr, src, len);
	return (ptr);
}

// void	test_case(const char *src)
// {
// 	char	*dest;

// 	dest = ft_strdup(src);
// 	//文字列のアドレス
// 	printf("src  : %s   src  : %p\n", src, (void *)src);
// 	printf("dest : %s   dest : %p\n", dest, (void *)dest);
// 	//変数自体のアドレス
// 	printf("src  : %s   &src  : %p\n", src, &src);
// 	printf("dest : %s   &dest : %p\n", dest, &dest);
// 	free(dest);
// }

// int	main(void)
// {
// 	test_case("hello");
// 	test_case("test string");
// 	test_case("");
// 	test_case("longer string example");
// 	test_case("1234567890");
// 	return (0);
// }
