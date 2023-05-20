/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:35:13 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 23:47:11 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	is_charset(char c, char const *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (true);
		charset++;
	}
	return (false);
}

void	trimmer(char const *str, char const *charset, char *dest)
{
	while (*str)
	{
		while (!is_charset(*str, charset) && *str)
		{
			*dest = *str;
			dest++;
			str++;
		}
		str++;
	}
}

size_t	trimmed_strlen(char const *s1, char const *set)
{
	size_t	dest_len;

	dest_len = 0;
	while (*s1)
	{
		if (!is_charset(*s1, set))
			dest_len++;
		s1++;
	}
	return (dest_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	dest_len;

	if (!s1 || !set)
		return (0);
	dest_len = trimmed_strlen(s1, set);
	dest = 0;
	dest = (char *)malloc(dest_len + 1);
	if (!dest)
		return (NULL);
	trimmer(s1, set, dest);
	dest[dest_len] = 0;
	return (dest);
}

// char	*str = "My 42_friend has lived with his 42_cats for 42_years.";
// char	*charset = "42_";

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim(str, charset));
// 	return (0);
// }
