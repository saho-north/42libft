/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 03:52:25 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/19 19:59:07 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = '0';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = '9';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = 'A';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = 'Z';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = 'a';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = 'z';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = '@';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = '$';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = '\n';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	c = '\t';
// 	printf("ft_isalnum = %d\n", ft_isalnum(c));
// 	printf("isalnum    = %d\n", isalnum(c));
// 	return (0);
// }
