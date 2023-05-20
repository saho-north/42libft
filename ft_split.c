/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:48:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 19:22:33 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_strs(const char *str, char delimiter)
{
	size_t	head_count;
	int		in_words_flag;

	head_count = 0;
	in_words_flag = 0;
	while (*str != '\0')
	{
		if (!in_words_flag && *str != delimiter)
		{
			in_words_flag = 1;
			head_count++;
		}
		else if (in_words_flag && *str == delimiter)
			in_words_flag = 0;
		str++;
	}
	return (head_count);
}

size_t	not_delimiter_strlen(const char *str, char delimiter)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != delimiter)
	{
		len++;
	}
	return (len);
}

void	after_failed_malloc(char **dest, size_t str_no)
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

char	**splitter(const char *str, char delimiter, char **dest,
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
				after_failed_malloc(dest, str_no - 1);
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

	if (!str || !delimiter)
		return (0);
	head_count = count_strs(str, delimiter);
	dest = (char **)malloc(sizeof(char *) * (head_count + 1));
	if (!dest)
		return (0);
	dest = splitter(str, delimiter, dest, head_count);
	if (!dest)
		return (0);
	dest[head_count] = 0;
	return (dest);
}

// void	free_split(char **arr)
// {
// 	size_t	i;

// 	if (!arr)
// 		return ;
// 	for (i = 0; arr[i]; i++)
// 		free(arr[i]);
// 	free(arr);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	delimiter;
// 	char	**ans;

// 	str = "_hello____world____japan____42____42Tokyo";
// 	delimiter = '_';
// 	ans = ft_split(str, delimiter);
// 	printf("0: %s\n", ans[0]);
// 	printf("1: %s\n", ans[1]);
// 	printf("2: %s\n", ans[2]);
// 	printf("3: %s\n", ans[3]);
// 	printf("4: %s\n\n", ans[4]);
// 	free_split(ans);
// 	str = "split this string";
// 	delimiter = ' ';
// 	ans = ft_split(str, delimiter);
// 	printf("0: %s\n", ans[0]);
// 	printf("1: %s\n", ans[1]);
// 	printf("2: %s\n\n", ans[2]);
// 	free_split(ans);
// 	str = "one|two|three|four|five";
// 	delimiter = '|';
// 	ans = ft_split(str, delimiter);
// 	printf("0: %s\n", ans[0]);
// 	printf("1: %s\n", ans[1]);
// 	printf("2: %s\n", ans[2]);
// 	printf("3: %s\n", ans[3]);
// 	printf("4: %s\n\n", ans[4]);
// 	free_split(ans);
// 	str = "comma,separated,values";
// 	delimiter = ',';
// 	ans = ft_split(str, delimiter);
// 	printf("0: %s\n", ans[0]);
// 	printf("1: %s\n", ans[1]);
// 	printf("2: %s\n", ans[2]);
// 	free_split(ans);
// 	return (0);
// }
