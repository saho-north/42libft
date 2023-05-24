/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:48:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 04:26:32 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(const char *str, char delimiter)
{
	size_t	head_count;
	bool	in_words_flag;

	head_count = 0;
	in_words_flag = false;
	while (*str != '\0')
	{
		if (!in_words_flag && *str != delimiter)
		{
			in_words_flag = true;
			head_count++;
		}
		else if (in_words_flag && *str == delimiter)
			in_words_flag = false;
		str++;
	}
	return (head_count);
}

static size_t	not_delimiter_strlen(const char *str, char delimiter)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != delimiter)
	{
		len++;
	}
	return (len);
}

static void	free_failed_malloc(char **dest, size_t str_no)
{
	size_t	index;

	index = 0;
	while (index < str_no)
	{
		free(dest[index]);
		index++;
	}
	free(dest);
}

static char	**splitter(const char *str, char delimiter, char **dest,
		size_t head_count)
{
	size_t	str_no;
	size_t	str_len;
	size_t	index;

	str_no = 0;
	str_len = 0;
	while (*str && str_no < head_count)
	{
		if (*str != delimiter)
		{
			str_len = not_delimiter_strlen(str, delimiter);
			dest[str_no] = (char *)malloc(sizeof(char) * (str_len + 1));
			if (!dest[str_no])
			{
				free_failed_malloc(dest, str_no - 1);
				return (0);
			}
			index = 0;
			while (*str && *str != delimiter)
				dest[str_no][index++] = *(str++);
			dest[str_no++][index] = '\0';
		}
		str++;
	}
	return (dest);
}

char	**ft_split(char const *str, char delimiter)
{
	char	**dest;
	size_t	head_count;

	if (!str)
		return (NULL);
	if (*str == '\0' && delimiter != '\0')
	{
		dest = (char **)malloc(sizeof(char *) * 1);
		if (!dest)
			return (NULL);
		dest[0] = NULL;
		return (dest);
	}
	head_count = count_strs(str, delimiter);
	dest = (char **)malloc(sizeof(char *) * (head_count + 1));
	if (!dest)
		return (NULL);
	dest = splitter(str, delimiter, dest, head_count);
	if (!dest)
		return (NULL);
	dest[head_count] = NULL;
	return (dest);
}

/*
TR: "_"
SEP: '\0'
Your ft_split returned a tab of the following strings:
Your ft_split returned a "NULL" str_tab

My ft_split returned:
0: "_"
1: (null)
*/

// void	free_split(char **arr)
// {
// 	size_t	i;

// 	if (!arr)
// 		return ;
// 	for (i = 0; arr[i]; i++)
// 		free(arr[i]);
// 	free(arr);
// }

// void	test_split(char *str, char delimiter)
// {
// 	char	**ans;
// 	size_t	i;

// 	ans = ft_split(str, delimiter);
// 	if (ans == NULL)
// 	{
// 		printf("ft_split returned NULL\n");
// 		return ;
// 	}
// 	i = 0;
// 	while (ans[i])
// 	{
// 		printf("%s\n", ans[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free_split(ans);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	delimiter;

// 	str = "_hello____world____japan____42____42Tokyo";
// 	delimiter = '_';
// 	test_split(str, delimiter);
// 	str = "split this string";
// 	delimiter = ' ';
// 	test_split(str, delimiter);
// 	str = "one|two|three|four|five";
// 	delimiter = '|';
// 	test_split(str, delimiter);
// 	str = "comma,separated,values";
// 	delimiter = ',';
// 	test_split(str, delimiter);
// 	test_split("\0aa\0bbb", '\0');
// 	return (0);
// }
