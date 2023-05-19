/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:56:34 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 20:16:04 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	to_find;
	size_t			i;

	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// void	*text = "ABCDECFG";

// int	main(void)
// {
// 	printf("ft_memchr for C : %s\n", (char *)ft_memchr(text, 'C', 5));
// 	printf("memchr    for C : %s\n", (char *)memchr(text, 'C', 5));
// }
