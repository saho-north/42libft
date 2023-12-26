/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 01:44:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/25 23:48:48 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;
	size_t	buf_size;

	buf_size = count * size;
	if (count > 0 && buf_size / count != size)
	{
		errno = ENOMEM; // ENOMEM: Cannot allocate memory
		return (NULL);
	}
	buf = (void *)malloc(buf_size);
	if (!buf)
	{
		errno = ENOMEM; // ENOMEM: Cannot allocate memory
		return (NULL);
	}
	return (ft_memset(buf, 0, buf_size));
}
