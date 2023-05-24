/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:01:18 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/24 03:51:45 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	to_find;

	str = (char *)s;
	to_find = (char)c;
	if (to_find == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	while (*str)
	{
		if (*str == to_find)
			return (str);
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*str;
// 	int			i;
// 	char		c;

// 	str = "ABCDEFG";
// 	for (i = 0; i < 5; i++)
// 	{
// 		c = 'A' + i;
// 		printf("ft_strchr for %c : %p\n", c, ft_strchr(str, c));
// 		printf("strchr    for %c : %p\n", c, strchr(str, c));
// 	}
// 	c = '\0';
// 	printf("ft_strchr for \\0 : %p\n", ft_strchr(str, c));
// 	printf("strchr    for \\0 : %p\n", strchr(str, c));
// 	return (0);
// }
