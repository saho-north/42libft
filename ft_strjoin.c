/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 02:39:12 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 17:19:43 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cat_str(char const *s1, char const *s2, char *ptr)
{
	while (*s1)
	{
		*(ptr++) = *(s1++);
	}
	while (*s2)
	{
		*(ptr++) = *(s2++);
	}
	*ptr = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == 0)
	{
		ptr = (char *)malloc(1);
		*ptr = 0;
		return (ptr);
	}
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	cat_str(s1, s2, ptr);
	return (ptr);
}
