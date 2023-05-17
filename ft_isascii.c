/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:17:43 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 04:20:04 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 0;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 32;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 65;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 97;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 126;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = -1;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 128;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 255;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	c = 500;
// 	printf("ft_isascii = %d\n", ft_isascii(c));
// 	printf("isascii    = %d\n", isascii(c));
// 	return (0);
// }
