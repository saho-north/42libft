/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:19:33 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/19 20:01:47 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = ' ';
// 	printf("ft_isprint (no.%d) = %d\n", c, ft_isprint(c));
// 	printf("isprint    (no.%d) = %d\n", c, isprint(c));
// 	c = '~';
// 	printf("ft_isprint (no.%d) = %d\n", c, ft_isprint(c));
// 	printf("isprint    (no.%d) = %d\n", c, isprint(c));
// 	return (0);
// }
