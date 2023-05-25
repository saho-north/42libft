/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 16:30:39 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (ptrdest == NULL && ptrsrc == NULL)
	{
		return (NULL);
	}
	while (n--)
	{
		*(ptrdest++) = *(ptrsrc++);
	}
	return (dst);
}
