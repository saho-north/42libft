/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:14:57 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 14:51:43 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		sample1[] = "ABCDEFGH";
char		sample2[] = "ABCDEFGH";

static void	test_ft_bzero(char *str1, char *str2, size_t n)
{
	void	*s1;
	void	*s2;

	s1 = (void *)str1;
	s2 = (void *)str2;
	ft_bzero(s1, n);
	bzero(s2, n);
	printf("ft_bzero = %s\n", str1);
	printf("bzero    = %s\n", str2);
}

int	main(void)
{
	test_ft_bzero(sample1, sample2, 2);
}
