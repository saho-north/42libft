/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:23:42 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/25 03:26:21 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_from_end(char *ptrdest, char *ptrsrc, size_t len)
{
	while (len > 0)
	{
		if (&ptrdest[len - 1] != NULL && &ptrsrc[len - 1] != NULL)
			ptrdest[len - 1] = ptrsrc[len - 1];
		len--;
	}
}

static void	move_from_start(char *ptrdest, char *ptrsrc, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		if (&ptrdest[index] != NULL && &ptrsrc[index] != NULL)
			ptrdest[index] = ptrsrc[index];
		index++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = (char *)dst;
	ptrsrc = (char *)src;
	if (ptrdest == NULL && ptrsrc == NULL)
		return (NULL);
	if (dst > src)
	{
		move_from_end(ptrdest, ptrsrc, len);
	}
	else
	{
		move_from_start(ptrdest, ptrsrc, len);
	}
	return (dst);
}
