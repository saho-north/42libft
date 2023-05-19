/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:57:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/19 20:01:27 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("\nft_isdigit\n");
// 	printf("2	: %d\n", ft_isdigit('2'));
// 	printf("e	: %d\n", ft_isdigit('e'));
// 	printf("A	: %d\n", ft_isdigit('A'));
// 	printf("?	: %d\n\n", ft_isdigit('?'));
// 	printf("isdigit\n");
// 	printf("2	: %d\n", isdigit('2'));
// 	printf("e	: %d\n", isdigit('e'));
// 	printf("A	: %d\n", isdigit('A'));
// 	printf("?	: %d\n\n", isdigit('?'));
// 	return (1);
// }
