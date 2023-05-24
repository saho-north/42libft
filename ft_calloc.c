/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 01:44:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 13:31:09 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;
	size_t	buf_size;

	buf = NULL;
	if (SIZE_MAX / count < size && count > 0 && size > 0)
	{
		return (NULL);
	}
	buf_size = count * size;
	buf = (void *)malloc(buf_size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, buf_size);
	return (buf);
}
