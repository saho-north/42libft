/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:07:37 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 12:39:00 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strtrim

s1:  The string to be trimmed.
set:  The reference set of characters to trim.

The trimmed string.
NULL if the allocation fails.

Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

int	ft_trimmedstrlen(char const *s1, char const *set)
{
	int		len;
	int		head;
	int		to_trim;
	char	*result;

	len = 0;
	head = 0;
	while (s1[head])
	{
		to_trim = 0;
		if (s1[head] != set[0])
		{
			len++;
			head++;
		}
		else
		{
			while (s1[head + to_trim] == set[to_trim] && s1[head + to_trim])
				to_trim++;
			if (!set[to_trim])
				return (0);
		}
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		to_trim;
	char	*result;

	if (!s1 || !set)
		return (s1);
	head = 0;
	while (s1[head])
	{
		to_trim = 0;
		while (s1[head + to_trim] == set[to_trim] && s1[head + to_trim])
		{
		}
	}
}

char	*str = "My 42 friend loves his 42 cats.";
char	*charset = "42 ";

int	main(void)
{
	printf("%s\n", ft_strtrim(str, charset));
	return (0);
}
