/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:48:21 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 20:50:00 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_strlen(char *str)
{
	printf("ft_strlen = %lu\n", ft_strlen(str));
	printf("strlen    = %lu\n\n", strlen(str));
}

int	main(void)
{
	char	*str;

	str = "In the quiet of the night, A feline shadow takes its flight,";
	test_ft_strlen(str);
	return (0);
}
