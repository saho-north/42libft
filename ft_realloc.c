/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:37:03 by sakitaha          #+#    #+#             */
/*   Updated: 2023/08/25 18:09:47 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_realloc:
 * Reallocates memory of old_size to new_size.
 * If new_size is less than old_size, returns NULL.
 * ptr: Pointer to the memory to be reallocated
 * old_size: The size of the current allocated memory
 * new_size: The size of the new allocated memory
 *
 * Return: Pointer to the newly allocated memory,
	or NULL if new_size is less than old_size
 */

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	if (new_size < old_size)
		return (NULL);
	new_ptr = malloc(new_size);
	if (new_ptr && ptr)
	{
		ft_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
