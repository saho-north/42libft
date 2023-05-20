/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 17:55:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char const *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

void	trimmer(char const *str, char const *charset, char *dest,
		size_t dest_len)
{
	while (*str && is_charset(*str, charset))
		str++;
	while (*str && dest_len > 0)
	{
		*dest = *str;
		dest++;
		str++;
		dest_len--;
	}
}

size_t	trimmed_strlen(char const *s1, char const *set)
{
	size_t	dest_len;
	int		in_word_flag;

	dest_len = 0;
	in_word_flag = 0;
	while (*s1)
	{
		if (!in_word_flag && !is_charset(*s1, set))
			in_word_flag = 1;
		if (in_word_flag && !is_charset(*s1, set))
			dest_len++;
		else if (in_word_flag && is_charset(*s1, set))
			break ;
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
	dest = (char *)malloc(dest_len + 1);
	if (!dest)
		return (0);
	trimmer(s1, set, dest, dest_len);
	dest[dest_len] = '\0';
	return (dest);
}

int	main(void)
{
	char	*str;
	char	*charset;
	char	*trimmed_str;

	str = "*-*-*ABC*-*-*";
	charset = "*-";
	trimmed_str = ft_strtrim(str, charset);
	if (trimmed_str)
	{
		printf("%s\n", trimmed_str);
		free(trimmed_str);
	}
	return (0);
}
