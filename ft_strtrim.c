/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 04:15:55 by sakitaha         ###   ########.fr       */
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

// void	check_strtrim(char *str, char *charset)
// {
// 	char	*trimmed_str;

// 	trimmed_str = ft_strtrim(str, charset);
// 	if (trimmed_str)
// 	{
// 		printf("Result : %s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	*str1;
// 	char	*charset1;
// 	char	*str2;
// 	char	*charset2;
// 	char	*str3;
// 	char	*charset3;
// 	char	*str4;
// 	char	*charset4;
// 	char	*str5;
// 	char	*charset5;

// 	str = "*-*-*ABC*-*-*";
// 	charset = "*-";
// 	check_strtrim(str, charset);
// 	str1 = "   hello    ";
// 	charset1 = " ";
// 	check_strtrim(str1, charset1);
// 	str2 = "!!!123!!!";
// 	charset2 = "!";
// 	check_strtrim(str2, charset2);
// 	str3 = "abcdefg";
// 	charset3 = "hijklmno";
// 	check_strtrim(str3, charset3);
// 	str4 = "12345";
// 	charset4 = "12345";
// 	check_strtrim(str4, charset4);
// 	str5 = "";
// 	charset5 = "";
// 	check_strtrim(str5, charset5);
// 	return (0);
// }
