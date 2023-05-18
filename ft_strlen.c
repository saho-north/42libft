/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:28:08 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 12:36:48 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned long	ft_strlen(const char *str)
{
	unsigned long	i;

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
