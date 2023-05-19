/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:36:10 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/19 12:13:14 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("\nft_isalpha\n");
// 	printf("2	: %d\n", ft_isalpha('2'));
// 	printf("e	: %d\n", ft_isalpha('e'));
// 	printf("A	: %d\n", ft_isalpha('A'));
// 	printf("?	: %d\n\n", ft_isalpha('?'));
// 	printf("isalpha\n");
// 	printf("2	: %d\n", isalpha('2'));
// 	printf("e	: %d\n", isalpha('e'));
// 	printf("A	: %d\n", isalpha('A'));
// 	printf("?	: %d\n\n", isalpha('?'));
// 	return (1);
// }
