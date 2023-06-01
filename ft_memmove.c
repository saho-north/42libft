/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/06/01 14:43:05 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrdest;
	char	*ptrsrc;
	size_t	index;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (!ptrdest && !ptrsrc)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			ptrdest[len] = ptrsrc[len];
	}
	else
	{
		index = 0;
		while (index < len)
		{
			ptrdest[index] = ptrsrc[index];
			index++;
		}
	}
	return (dst);
}
