/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:18:44 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 13:02:19 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype
char	*ft_substr(char const *s, unsigned int start, size_t len);

Parameters
s:  The string from which to create the substring.
start:  The start index of the substr in the string ’s’.
len:  The maximum length of the substring.

Return value
The substring.
NULL if the allocation fails.

Description
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substr begins at index ’start’ and is of maximum size ’len’.

[例外処理]
1. 文字列 `s` が `NULL` の時は，`NULL` をリターンする．
2.`len==0の時およびstart>=ft_strlen(s)の場合は空の文字列を返す。
3. lenが長すぎてsの終わりを超える場合は、sの最後まで抽出した文字列を返す。


文字列strの部分文字列を半開区間［begin, end）で考えるとき、
ft_substr(str, begin - str, end	- begin)で部分文字列を作れる。
特に、begin == strのとき、ft_substr(begin, 0, end - begin)

ft_substr("文字列",<returnする文字列の開始インデックス>, <returnする文字列の文字数>)
ft_substr("aiueo", 2, 2) => ue
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		*substr = 0;
		return (substr);
	}
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	const char		*str;
// 	unsigned int	start;
// 	size_t			len;
// 	char			*sub;

// 	str = "Hello, world!";
// 	start = 7;
// 	len = 5;
// 	sub = ft_substr(str, start, len);
// 	if (sub)
// 	{
// 		printf("%s\n", sub); // "world" を表示
// 		free(sub);
// 	}
// 	return (0);
// }
