

// #include "ft_stdlib.h"

// /*
// 現在未完成の関数です。

// この関数もconvert関数の戻り値をどのように扱うかを明確にする必要があります。また、基数が指定されていない（baseが0）場合の処理や、16進数表記（0xや0X）の取り扱い、異なる基数での文字列の処理など、strtol関数の完全な挙動を模倣するためにはさらに詳細なロジックが必要です。
//  */

// static void	skip_space(const char **str)
// {
// 	while (**str == ' ' || ('\t' <= **str && **str <= '\r'))
// 	{
// 		(*str)++;
// 	}
// }

// static bool	check_sign(const char **str)
// {
// 	bool	is_minus;

// 	is_minus = (**str == '-');
// 	if (**str == '+' || **str == '-')
// 	{
// 		(*str)++;
// 	}
// 	return (is_minus);
// }

// static bool	is_overflow(unsigned long num, bool is_minus, unsigned long n,
// 		int base)
// {
// 	unsigned long	ov_div;
// 	unsigned long	ov_mod;

// 	ov_div = LONG_MAX / (unsigned long)base;
// 	ov_mod = LONG_MAX % (unsigned long)base + (unsigned long)is_minus;
// 	if (num > ov_div || (num == ov_div && n > ov_mod))
// 	{
// 		return (true);
// 	}
// 	return (false);
// }

// static long	convert(const char *str, bool is_minus, char **endptr, int base)
// {
// 	unsigned long	num;
// 	unsigned long	next_digit;

// 	num = 0;
// 	while (ft_isdigit(*str))
// 	{
// 		next_digit = *str - '0';
// 		if (is_overflow(num, is_minus, next_digit, base))
// 		{
// 			errno = ERANGE;
// 			if (!is_minus)
// 				return (LONG_MAX);
// 			return (LONG_MIN);
// 		}
// 		num = num * (unsigned long)base + (*str - '0');
// 		str++;
// 	}
// 	*endptr = (char *)str;
// }

// long	ft_strtol(const char *str, char **endptr, int base)
// {
// 	bool			is_minus;
// 	unsigned long	num;

// 	skip_space(&str);
// 	is_minus = check_sign(&str);
// 	if (!ft_isdigit(*str) || (base != 0 && (base < 2 || 36 < base)))
// 	{
// 		errno = EINVAL;
// 		return (0);
// 	}
// 	num = convert(str, is_minus, endptr, base);
// 	if (is_minus)
// 	{
// 		return ((long)(-1 * num));
// 	}
// 	return ((long)num);
// }
