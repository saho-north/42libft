/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:49:10 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 19:37:51 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}

// char	sample1[] = "ABCDEFGH";
// char	sample2[] = "ABCDEFGH";

// int	main(void)
// {
// 	write(1, "ft_bzero = ", 11);
// 	ft_bzero(sample1, 2);
// 	for (int i = 0; i < 8; i++)
// 	{
// 		write(1, &sample1[i], 1);
// 	}
// 	write(1, "\n", 1);
// 	write(1, "bzero    = ", 11);
// 	bzero(sample2, 2);
// 	for (int i = 0; i < 8; i++)
// 	{
// 		write(1, &sample2[i], 1);
// 	}
// 	write(1, "\n", 1);
// }
