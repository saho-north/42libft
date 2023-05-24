/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:28:08 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/24 03:53:34 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "In the quiet of the night, A feline shadow takes its flight,";
// 	printf("ft_strlen = %lu\n", ft_strlen(str));
// 	printf("strlen    = %lu\n", strlen(str));
// 	return (0);
// }
