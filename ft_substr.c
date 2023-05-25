/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:18:44 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:45:58 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_substr(char const *s, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len == 0 || start >= s_len)
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		*substr = 0;
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = create_substr(&s[start], len);
	return (substr);
}
