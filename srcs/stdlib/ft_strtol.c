/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 11:17:42 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/30 13:26:35 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/*
現在未完成の関数です。

この関数もconvert関数の戻り値をどのように扱うかを明確にする必要があります。また、基数が指定されていない（baseが0）場合の処理や、
16進数表記（0xや0X）の取り扱い、異なる基数での文字列の処理など、strtol関数の完全な挙動を模倣するためにはさらに詳細なロジックが必要です。
 */

static void	init_lookup_table(int char_to_value[256], int base)
{
	size_t	c;

	c = 0;
	while (c < 256)
	{
		if ('0' <= c && c <= '9' && c < '0' + base)
			char_to_value[c] = c - '0';
		else if ('A' <= c && c <= 'Z' && c < 'A' + base - 10)
			char_to_value[c] = 10 + c - 'A';
		else if ('a' <= c && c <= 'z' && c < 'a' + base - 10)
			char_to_value[c] = 10 + c - 'a';
		else
			char_to_value[c] = -1;
		c++;
	}
}

static bool	is_overflow(unsigned long num, bool is_negative,
		unsigned long next_digit, int base)
{
	unsigned long	ov_div;
	unsigned long	ov_mod;

	ov_div = LONG_MAX / (unsigned long)base;
	ov_mod = LONG_MAX % (unsigned long)base + (unsigned long)is_negative;
	if (num > ov_div || (num == ov_div && next_digit > ov_mod))
	{
		return (true);
	}
	return (false);
}

static long	convert(const char *str, bool is_negative, char **endptr, int base)
{
	unsigned long	num;
	unsigned long	next_digit;
	int				char_to_int[256];

	num = 0;
	init_lookup_table(char_to_int, base);
	while (*str && char_to_int[(size_t)*str] != -1)
	{
		next_digit = (unsigned long)char_to_int[(size_t)*str];
		if (is_overflow(num, is_negative, next_digit, base))
		{
			errno = ERANGE;
			if (endptr)
				*endptr = (char *)str;
			if (!is_negative)
				return (LONG_MAX);
			return (LONG_MIN);
		}
		num = num * (unsigned long)base + next_digit;
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	if (is_negative)
	{
		return ((long)(-1 * num));
	}
	return ((long)num);
}

static long	tmp(const char *str, bool is_negative, char **endptr, int base)
{
	unsigned long	num;
	unsigned long	next_digit;
	int				char_to_int[256];

	num = 0;
	init_lookup_table(char_to_int, base);
	while (*str && char_to_int[(size_t)*str] != -1)
	{
		next_digit = (unsigned long)char_to_int[(size_t)*str];
		if (is_overflow(num, is_negative, next_digit, base))
		{
			errno = ERANGE;
			if (endptr)
				*endptr = (char *)str;
			if (!is_negative)
				return (LONG_MAX);
			return (LONG_MIN);
		}
		num = num * (unsigned long)base + next_digit;
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	if (is_negative)
	{
		return ((long)(-1 * num));
	}
	return ((long)num);
}

static void	skip_space(const char **str)
{
	while (ft_isspace(**str))
	{
		(*str)++;
	}
}

static bool	check_sign(const char **str)
{
	bool	is_negative;

	is_negative = (**str == '-');
	if (**str == '-' || **str == '+')
	{
		(*str)++;
	}
	return (is_negative);
}

long	ft_strtol(const char *str, char **endptr, int base)
{
	bool	is_negative;

	skip_space(&str);
	is_negative = check_sign(&str);
	if (!str || !*str || (base != 0 && (base < 2 || base > 36)))
	{
		errno = EINVAL;
		return (0);
	}
	if (base == 0)
	{
		if (*str == '0')
		{
			if (*(str + 1) == 'x' || *(str + 1) == 'X')
			{
				base = 16;
				str += 2;
			}
			else
			{
				base = 8;
				str++;
			}
		}
		else
		{
			base = 10;
		}
	}
	return (convert(str, is_negative, endptr, base));
}
