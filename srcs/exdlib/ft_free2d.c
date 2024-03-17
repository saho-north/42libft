/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:42:39 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/17 09:25:50 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

/**
 * Frees a dynamically allocated 2D array of any type
 * up to a specified size or until a NULL pointer is encountered.
 */
void	ft_free2d(void **array, size_t size)
{
	size_t	i;

	if (!array)
	{
		return ;
	}
	i = 0;
	while (i < size && array[i])
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
}
