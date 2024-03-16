/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:42:39 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/17 01:36:44 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

/**
 * Frees a dynamically allocated 2D array of any type
 * up to a specified size or until a NULL pointer is encountered.
 * If `size` is 0, assumes the array ends with a NULL pointer.
 * The caller must ensure the array is correctly sized or NULL-terminated.
 */
void	ft_free_2d_array(void **array, size_t size)
{
	size_t	i;

	if (!array)
	{
		return ;
	}
	i = 0;
	while (array[i] && (size == 0 || i < size))
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
}
