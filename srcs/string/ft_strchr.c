/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:01:18 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/12/29 23:15:20 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	to_find;

	str = (char *)s;
	to_find = (char)c;
	while (*str)
	{
		if (*str == to_find)
			return (str);
		str++;
	}
	if (*str == to_find)
		return (str);
	return (NULL);
}
