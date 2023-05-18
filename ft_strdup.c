/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 02:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 02:13:38 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = 0;
	while (src[len])
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr = ft_strcpy(ptr, src);
	return (ptr);
}

// void	test_case(char *src)
// {
// 	char	*dest;

// 	dest = ft_strdup(src);
// 	printf("src  : %s   src  : %p\n", src, (void *)src);
// 	printf("dest : %s   dest : %p\n", dest, (void *)dest);
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
