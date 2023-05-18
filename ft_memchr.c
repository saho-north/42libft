/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:56:34 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 21:23:01 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*str;
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
	return (0);
}

// void	*text = "ABCDECFG";

// int	main(void)
// {
// 	printf("ft_memchr for C : %s\n", (char *)ft_memchr(text, 'C', 5));
// 	printf("memchr    for C : %s\n", (char *)memchr(text, 'C', 5));
// }
