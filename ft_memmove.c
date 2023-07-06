/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/07/07 08:31:07 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (!ptrdest && !ptrsrc)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			*(ptrdest + len) = *(ptrsrc + len);
	}
	else
	{
		while (len--)
			*(ptrdest++) = *(ptrsrc++);
	}
	return (dst);
}
