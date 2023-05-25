/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 02:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 00:22:01 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*src;
	size_t	len;

	src = (char *)s1;
	len = 0;
	while (src[len])
		len++;
	ptr = (char *)malloc(++len);
	if (!ptr)
		return (NULL);
	ptr = (char *)ft_memcpy(ptr, src, len);
	return (ptr);
}
