/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:48:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 14:03:56 by sakitaha         ###   ########.fr       */
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

static void	*free_failed_malloc(char **dest, size_t str_no)
{
	size_t	index;

	index = 0;
	while (index < str_no)
	{
		free(dest[index]);
		index++;
	}
	free(dest);
	return (NULL);
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
				return (free_failed_malloc(dest, str_no - 1));
			index = 0;
			while (*str && *str != delimiter)
				dest[str_no][index++] = *(str++);
			dest[str_no++][index] = '\0';
		}
		else
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
