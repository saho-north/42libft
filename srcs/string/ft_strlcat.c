/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:47:14 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/12/29 23:16:14 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;

	destlen = 0;
	if (dest)
		destlen = ft_strlen(dest);
	if (size <= destlen)
		return (size + ft_strlen(src));
	while (*dest)
		dest++;
	srclen = ft_strlcpy(dest, src, size - destlen);
	return (destlen + srclen);
}
