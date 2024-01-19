/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:37:03 by sakitaha          #+#    #+#             */
/*   Updated: 2024/01/19 20:56:08 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	if (new_size < old_size)
	{
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr && ptr)
	{
		ft_memcpy(new_ptr, ptr, old_size);
		free(ptr);
		ptr = NULL;
	}
	return (new_ptr);
}
