/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:01:18 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 19:22:28 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	char	to_find;

	to_find = (char)c;
	if (to_find == '\0')
	{
		while (*s)
			s++;
		return (s);
	}
	while (*s)
	{
		if (*s == to_find)
			return (s);
		s++;
	}
	return (0);
}

// char	*str = "ABCDEFG";

// int	main(void)
// {
// 	printf("ft_strchr for C : %s\n", ft_strchr(str, 'C'));
// 	printf("strchr    for C : %s\n", strchr(str, 'C'));
// }
