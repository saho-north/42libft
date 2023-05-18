/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:59:07 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 18:59:58 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	printf("ft_tolower c    : %d\n", ft_tolower('c'));
// 	printf("ft_tolower A    : %d\n", ft_tolower('A'));
// 	printf("ft_tolower 0    : %d\n", ft_tolower('0'));
// 	printf("ft_tolower &    : %d\n", ft_tolower('&'));
// 	printf("ft_tolower NULL : %d\n", ft_tolower(0));
// 	printf("ft_tolower      : %d\n\n", ft_tolower(' '));
// 	printf("tolower c       : %d\n", tolower('c'));
// 	printf("tolower A       : %d\n", tolower('A'));
// 	printf("tolower 0       : %d\n", tolower('0'));
// 	printf("tolower &       : %d\n", tolower('&'));
// 	printf("tolower NULL    : %d\n", tolower(0));
// 	printf("tolower         : %d\n", tolower(' '));
// 	return (0);
// }
