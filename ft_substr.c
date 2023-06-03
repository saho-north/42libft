/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:18:44 by sakitaha          #+#    #+#             */
/*   Updated: 2023/06/03 16:39:04 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	srclen;

	if (!s)
		return (NULL);
	srclen = ft_strlen(s);
	if ((size_t)start >= srclen)
		len = 0;
	else if (len > srclen - (size_t)start)
		len = srclen - (size_t)start;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	substr = ft_memcpy(substr, s + start, len);
	return (substr);
}
