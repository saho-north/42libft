/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 02:15:54 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 12:11:09 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
