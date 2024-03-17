/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2dnull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:42:39 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/17 09:28:36 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

/**
 * Frees a dynamically allocated 2D array of any type
 * until a NULL pointer is encountered.
 * It is caller's responsibility to ensure
 * that the array is NULL-terminated.
 */
void	ft_free2dnull(void **array)
{
	size_t	i;

	if (!array)
	{
		return ;
	}
	i = 0;
	while (array[i])
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
}
