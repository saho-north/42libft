/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:07:19 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 15:07:41 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isdigit(int c)
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
