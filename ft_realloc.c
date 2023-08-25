/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:37:03 by sakitaha          #+#    #+#             */
/*   Updated: 2023/08/25 16:01:43 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_realloc:

 * Reallocates memory of old_size to new_size.
 * Caller must ensure that old_size is less than or equal to new_size.
 * ptr: Pointer to the memory to be reallocated
 * old_size: The size of the current allocated memory
 * new_size: The size of the new allocated memory
 *
 * Return: Pointer to the newly allocated memory
 */

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	ft_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
