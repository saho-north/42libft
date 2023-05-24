/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:07:19 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 17:28:35 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_isdigit(int c)
{
	int	actual;
	int	expected;

	actual = ft_isdigit(c);
	expected = isdigit(c);
	printf("Character to test: %c\n", (char)c);
	printf("ft_isdigit : %d\n", actual);
	printf("isdigit    : %d\n", expected);
	printf("\n");
}

int	main(void)
{
	test_ft_isdigit('2');
	test_ft_isdigit('e');
	test_ft_isdigit('A');
	test_ft_isdigit('?');
	return (1);
}
