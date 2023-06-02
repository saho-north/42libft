/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:47:14 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/06/01 16:45:54 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	if (dest)
		destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	while (*dest)
		dest++;
	while (*src && i < size - destlen - 1)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (destlen + srclen);
}
