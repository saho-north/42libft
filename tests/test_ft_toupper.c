/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:42:09 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 22:43:35 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_toupper(int c)
{
	printf("ft_toupper [%c] -> %d\n", (char)c, ft_toupper(c));
	printf("toupper    [%c] -> %d\n\n", (char)c, toupper(c));
}

int	main(void)
{
	test_ft_toupper('c');
	test_ft_toupper('A');
	test_ft_toupper('0');
	test_ft_toupper('&');
	test_ft_toupper(0);
	test_ft_toupper(' ');
	return (0);
}
