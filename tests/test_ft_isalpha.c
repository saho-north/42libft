/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:56:48 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 17:28:46 by Saho Kitaha      ###   ########.fr       */
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
	return (1);
}
