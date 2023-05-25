/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:47:11 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:50:51 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_tolower(int c)
{
	printf("ft_tolower [%c] -> %d\n", (char)c, ft_tolower(c));
	printf("tolower    [%c] -> %d\n\n", (char)c, tolower(c));
}

int	main(void)
{
	test_ft_tolower('c');
	test_ft_tolower('A');
	test_ft_tolower('0');
	test_ft_tolower('&');
	test_ft_tolower(0);
	test_ft_tolower(' ');
	return (0);
}
