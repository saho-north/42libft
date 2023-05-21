/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:18:44 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/21 01:21:26 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Prototype
char	*ft_substr(char const *s, unsigned int start, size_t len);

Parameters
s:  The string from which to create the substring.
start:  The start index of the substring in the string ’s’.
len:  The maximum length of the substring.

Return value
The substring.
NULL if the allocation fails.

Description
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

【ft_substr】
 start>=ft_strlen(s)の場合は空の文字列を返す。
 lenが長すぎてsの終わりを超える場合は、sの最後まで抽出した文字列を返す。

 [** 例外処理に気を付ける！]
　文字列 `s` が `NULL` の時は，`NULL` をリターンする．
　が，
　`len` が0以下の時，`start` が 文字列 `s` の長さ以上の時は，[* 空文字をリターンする！]
　文字列strの部分文字列を半開区間［begin, end）で考えるとき、ft_substr(str, begin - str, end
		- begin)で部分文字列を作れる。
　 特に、begin == strのとき、ft_substr(begin, 0, end - begin)

2020/10/08 追記 kohkubo

ft_substr("文字列",<returnする文字列の開始インデックス>, <returnする文字列の文字数>)
ft_substr("aiueo", 2, 2) => ue
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = 0;
	substring = (char *)malloc(len + 1);
	while (start)
	{
		s++;
		start--;
	}
	i = 0;
	while (i < len && s[i])
	{
		substring[i] = s[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

int	main(void)
{
	const char		*str;
	unsigned int	start;
	size_t			len;
	char			*sub;

	str = "Hello, world!";
	start = 7;
	len = 5;
	sub = ft_substr(str, start, len);
	if (sub)
	{
		printf("%s\n", sub); // "world" を表示
		free(sub);
	}
	return (0);
}
