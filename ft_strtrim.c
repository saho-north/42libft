/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:11:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/21 00:10:59 by sakitaha         ###   ########.fr       */
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

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	*trimmed_str;
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
// 	trimmed_str = ft_strtrim(str, charset);
// 	if (trimmed_str)
// 	{
// 		printf("%s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// 	// Additional test cases
// 	str1 = "   hello    ";
// 	charset1 = " ";
// 	trimmed_str = ft_strtrim(str1, charset1);
// 	if (trimmed_str)
// 	{
// 		printf("%s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// 	str2 = "!!!123!!!";
// 	charset2 = "!";
// 	trimmed_str = ft_strtrim(str2, charset2);
// 	if (trimmed_str)
// 	{
// 		printf("%s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// 	str3 = "abcdefg";
// 	charset3 = "hijklmno";
// 	trimmed_str = ft_strtrim(str3, charset3);
// 	if (trimmed_str)
// 	{
// 		printf("%s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// 	str4 = "12345";
// 	charset4 = "12345";
// 	trimmed_str = ft_strtrim(str4, charset4);
// 	if (trimmed_str)
// 	{
// 		printf("%s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// 	str5 = "";
// 	charset5 = "";
// 	trimmed_str = ft_strtrim(str5, charset5);
// 	if (trimmed_str)
// 	{
// 		printf("%s\n", trimmed_str);
// 		free(trimmed_str);
// 	}
// 	return (0);
// }
