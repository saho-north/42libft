/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:58:53 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 17:01:25 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_strchr(char *str, char c)
{
	printf("ft_strchr for %c : %p\n", c, ft_strchr(str, c));
	printf("strchr    for %c : %p\n\n", c, strchr(str, c));
}

int	main(void)
{
	const char	*str;
	char		c;

	str = "ABCDEFG";
	for (int i = 0; i < 5; i++)
	{
		c = 'A' + i;
		test_ft_strchr(str, c);
	}
	c = '\0';
	test_ft_strchr(str, c);
	return (0);
}
