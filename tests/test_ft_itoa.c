/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:53:28 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/26 00:08:19 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_itoa(int num)
{
	char	*str;

	str = ft_itoa(num);
	printf("Input:   %d\nft_itoa: %s\n\n", num, str);
	free(str);
}

int	main(void)
{
	int	n;

	test_ft_itoa(12345);
	test_ft_itoa(-9876);
	test_ft_itoa(0);
	test_ft_itoa(INT_MAX);
	test_ft_itoa(INT_MIN);
	for (int i = 0; i < 5; i++)
	{
		n = rand();
		test_ft_itoa(n);
	}
	return (0);
}
