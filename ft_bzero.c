/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:49:10 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 12:57:08 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <unistd.h>

void	ft_bzero(char *s, size_t n)
{
	while (n > 0)
	{
		*s = 0;
		s++;
		n--;
	}
}

// char	sample1[] = "ABCDEFGH";
// char	sample2[] = "ABCDEFGH";

// int	main(void)
// {
// 	ft_bzero(sample1, 3);
// 	printf("ft_bzero = %s\n", sample1);
// 	for (int i = 0; i < 8; i++)
// 	{
// 		write(1, &sample1[i], 1);
// 	}
// 	write(1, "\n", 1);
// 	bzero(sample2, 3);
// 	printf("bzero    = %s\n", sample2);
// 	for (int i = 0; i < 8; i++)
// 	{
// 		write(1, &sample2[i], 1);
// 	}
// 	write(1, "\n", 1);
// }
