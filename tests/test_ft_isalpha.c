/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:56:48 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 00:04:05 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_isalpha(int c)
{
	int	actual;
	int	expected;

	actual = ft_isalpha(c);
	expected = isalpha(c);
	printf("Character to test: %c\n", (char)c);
	printf("ft_isalpha : %d\n", actual);
	printf("isalpha    : %d\n", expected);
	printf("\n");
}

int	main(void)
{
	test_ft_isalpha('2');
	test_ft_isalpha('e');
	test_ft_isalpha('A');
	test_ft_isalpha('?');
	return (0);
}
