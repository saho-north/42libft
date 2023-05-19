

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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

int	count_strings(char *str, char *charset)
{
	int		head_count;
	bool	in_words_flag;

	head_count = 0;
	in_words_flag = false;
	while (*str != '\0')
	{
		if (!in_words_flag && !(is_charset(*str, charset)))
		{
			in_words_flag = true;
			head_count++;
		}
		else if (in_words_flag && is_charset(*str, charset))
			in_words_flag = false;
		str++;
	}
	return (head_count);
}

char	**splitter(char *str, char *charset, char **dest, int head_count)
{
	int	str_no;
	int	str_len;
	int	index;

	str_no = 0;
	str_len = 0;
	while (*str && str_no < head_count)
	{
		if (!is_charset(*str, charset))
		{
			str_len = not_charset_strlen(str, charset);
			dest[str_no] = (char *)malloc(sizeof(char) * (str_len + 1));
			if (!dest[str_no])
				return (0);
			index = 0;
			while (*str && !is_charset(*str, charset))
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

bool	is_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (true);
		charset++;
	}
	return (false);
}

void	trimmer(char *str, char *charset, char *dest)
{
	while (*str)
	{
		if
	}
}

int	trimmed_len(char const *s1, char const *set)
{
	int	dest_len;

	dest_len = 0;
	while (*s1)
	{
		if (!is_charset(*s1, set))
		{
			dest_len++;
		}
		s1++;
	}
	return (dest_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		dest_len;
	int		head;
	int		to_trim;

	if (!s1 || !set)
		return (0);
	dest_len = trimmed_len(s1, set);
	dest = 0;
	dest = (char *)malloc(dest_len + 1);
	if (!dest)
		return (0);
	dest[dest_len] = 0;
	return (dest);
}

char	*str = "My 42_friend loves his 42_cats.";
char	*charset = "42_";

int	main(void)
{
	printf("%s\n", ft_strtrim(str, charset));
	return (0);
}
