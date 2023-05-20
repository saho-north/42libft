/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:48:21 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/21 00:12:47 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	printf("ft_toupper c    : %d\n", ft_toupper('c'));
// 	printf("ft_toupper A    : %d\n", ft_toupper('A'));
// 	printf("ft_toupper 0    : %d\n", ft_toupper('0'));
// 	printf("ft_toupper &    : %d\n", ft_toupper('&'));
// 	printf("ft_toupper NULL : %d\n", ft_toupper(0));
// 	printf("ft_toupper      : %d\n\n", ft_toupper(' '));
// 	printf("toupper c       : %d\n", toupper('c'));
// 	printf("toupper A       : %d\n", toupper('A'));
// 	printf("toupper 0       : %d\n", toupper('0'));
// 	printf("toupper &       : %d\n", toupper('&'));
// 	printf("toupper NULL    : %d\n", toupper(0));
// 	printf("toupper         : %d\n", toupper(' '));
// 	return (0);
// }
