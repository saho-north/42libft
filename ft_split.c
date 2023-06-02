/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:48:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/06/02 16:19:55 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	not_delimiter_strlen(const char *str, char delimiter)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != delimiter)
		len++;
	return (len);
}

static void	*free_failed_malloc(char **dest, size_t str_no)
{
	size_t	i;

	i = 0;
	while (i < str_no)
	{
		free(dest[i++]);
	}
	free(dest);
	dest = NULL;
	return (NULL);
}

static char	**splitter(const char *str, char delimiter, char **dest,
		size_t word_count)
{
	size_t	str_no;
	size_t	len;
	size_t	i;

	str_no = 0;
	while (*str && str_no < word_count)
	{
		if (*str != delimiter)
		{
			len = not_delimiter_strlen(str, delimiter);
			dest[str_no] = (char *)ft_calloc(len + 1, sizeof(char));
			if (!dest[str_no])
				return (free_failed_malloc(dest, str_no));
			i = 0;
			while (*str && *str != delimiter)
				dest[str_no][i++] = *(str++);
			str_no++;
		}
		else
			str++;
	}
	return (dest);
}

static size_t	count_words(const char *str, char delimiter)
{
	size_t	word_count;
	bool	in_words_flag;

	word_count = 0;
	in_words_flag = false;
	while (*str && delimiter)
	{
		if (!in_words_flag && *str != delimiter)
		{
			in_words_flag = true;
			word_count++;
		}
		else if (in_words_flag && *str == delimiter)
			in_words_flag = false;
		str++;
	}
	return (word_count);
}

char	**ft_split(char const *str, char delimiter)
{
	char	**dest;
	size_t	word_count;

	if (!str)
		return (NULL);
	word_count = count_words(str, delimiter);
	dest = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!dest)
		return (NULL);
	if (*str == '\0' && delimiter != '\0')
		return (dest);
	dest = splitter(str, delimiter, dest, word_count);
	if (!dest)
		return (NULL);
	dest[word_count] = NULL;
	return (dest);
}
