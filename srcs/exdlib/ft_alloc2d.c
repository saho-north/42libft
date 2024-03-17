/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 09:15:01 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/17 09:24:01 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"
#include <stdlib.h>

/**
 * Allocates a 2D array of pointers and initializes each element to NULL.
 * Returns a pointer to the allocated array or NULL if the allocation fails.
 */
void	**ft_alloc2d(size_t height, size_t width, size_t elem_size)
{
	size_t	i;
	void	**buf;

	buf = (void **)malloc(height * sizeof(void *));
	if (!buf)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		buf[i] = ft_calloc(width, elem_size);
		if (!buf[i])
		{
			ft_free2d(buf, i);
			return (NULL);
		}
		i++;
	}
	return (buf);
}
