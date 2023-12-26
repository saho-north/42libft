/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:00:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/07/07 00:54:21 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	to_find;
	int		len;

	str = (char *)s;
	to_find = (char)c;
	len = (int)ft_strlen(s);
	while (len >= 0)
	{
		if (*(str + len) == to_find)
			return (str + len);
		len--;
	}
	return (NULL);
}
