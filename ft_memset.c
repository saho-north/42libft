/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:37:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 12:48:33 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_memset(char *b, int c, size_t len)
{
	while (len > 0)
	{
		*b = c;
		b++;
		len--;
	}
}

// char	sample1[] = "ABCDEFGH";
// char	sample2[] = "ABCDEFGH";

// int	main(void)
// {
// 	ft_memset(sample1, 61, 3);
// 	printf("ft_memset = %s\n", sample1);
// 	memset(sample2, 61, 3);
// 	printf("memset    = %s\n", sample2);
// }
