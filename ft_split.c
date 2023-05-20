/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:48:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/20 00:25:21 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 　
分割後の文字列領域をmallocしている時にNULLが返った時は、それまで確保していた領域を全てfreeする。
（機械判定は通るけど、厳しい人は減点するかも。）
*/

bool	is_delimiter(char c, char delimiter)
{
	if (c == delimiter)
		return (true);
	else
		return (false);
}

size_t	count_strs(char *str, char delimiter)
{
	size_t	head_count;
	bool	in_words_flag;

	head_count = 0;
	in_words_flag = false;
	while (*str != '\0')
	{
		if (!in_words_flag && !(is_delimiter(*str, delimiter)))
		{
			in_words_flag = true;
			head_count++;
		}
		else if (in_words_flag && is_delimiter(*str, delimiter))
			in_words_flag = false;
		str++;
	}
	return (head_count);
}

size_t	not_delimiter_strlen(char *str, char delimiter)
{
	size_t	count;

	count = 0;
	while (str[count] && !is_delimiter(str[count], delimiter))
	{
		count++;
	}
	return (count);
}

char	**splitter(char *str, char delimiter, char **dest, int head_count)
{
	int	str_no;
	int	str_len;
	int	index;

	str_no = 0;
	str_len = 0;
	while (*str && str_no < head_count)
	{
		if (!is_delimiter(*str, delimiter))
		{
			str_len = not_delimiter_strlen(str, delimiter);
			dest[str_no] = (char *)malloc(sizeof(char) * (str_len + 1));
			if (!dest[str_no])
				return (NULL);
			index = 0;
			while (*str && !is_delimiter(*str, delimiter))
			{
				dest[str_no][index++] = *str;
				str++;
			}
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
		return (NULL);
	head_count = count_strs(str, delimiter);
	dest = NULL;
	dest = (char **)malloc(sizeof(char *) * (head_count + 1));
	if (!dest)
		return (NULL);
	dest = splitter(str, delimiter, dest, head_count);
	if (!dest)
		return (NULL);
	dest[head_count] = 0;
	return (dest);
}

void	free_split(char **arr)
{
	int	i;

	if (!arr)
		return ;
	for (i = 0; arr[i]; i++)
		free(arr[i]);
	free(arr);
}

int	main(void)
{
	char	*str;
	char	*delimiter;
	char	**ans;

	str = "_hello__+__world__+__japan__+__42__+__42Tokyo";
	delimiter = "+_";
	ans = ft_split(str, delimiter);
	printf("0: %s\n", ans[0]);
	printf("1: %s\n", ans[1]);
	printf("2: %s\n", ans[2]);
	printf("3: %s\n", ans[3]);
	printf("4: %s\n", ans[4]);
	printf("5: %s\n", ans[5]);
	free_split(ans);
}
