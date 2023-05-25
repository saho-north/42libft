/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:00:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/25 21:30:01 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	to_find;
	size_t	len;

	str = (char *)s;
	to_find = (char)c;
	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		if (str[len - 1] == to_find)
			return (&str[len - 1]);
		len--;
	}
	return (0);
}
