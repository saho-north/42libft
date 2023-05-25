/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:34:28 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static size_t	get_trimmed_len(char const *s1, char const *set, size_t len,
		size_t start)
{
	size_t	end;

	end = len;
	while (end > start && is_charset(s1[end - 1], set))
	{
		end--;
	}
	return (end - start);
}

static size_t	get_start_index(char const *s1, char const *set, size_t len)
{
	size_t	start;

	start = 0;
	while (start < len && is_charset(s1[start], set))
	{
		start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	src_len;
	size_t	dst_len;
	size_t	start;

	if (!s1 || !set)
		return (0);
	src_len = ft_strlen(s1);
	start = get_start_index(s1, set, src_len);
	dst_len = get_trimmed_len(s1, set, src_len, start) + 1;
	dest = (char *)malloc(dst_len);
	if (!dest)
		return (0);
	ft_strlcpy(dest, &s1[start], dst_len);
	dest[dst_len] = '\0';
	return (dest);
}
