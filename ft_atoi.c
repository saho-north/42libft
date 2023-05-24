/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:12:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 04:15:57 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	convert_num(const char *str, bool sign)
{
	long long	ov_div;
	long long	ov_mod;
	long long	num;

	ov_div = LLONG_MAX / 10;
	ov_mod = LLONG_MAX % 10;
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		if (num > ov_div || (num == ov_div && (*str - '0') > ov_mod))
		{
			if (sign)
				return (-1);
			else
				return (0);
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	if (!sign)
		num *= -1;
	return (num);
}

int	ft_atoi(const char *str)
{
	long long	num;
	bool		sign;

	sign = true;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = false;
		str++;
	}
	num = convert_num(str, sign);
	return ((int)num);
}

// void	test_ft_atoi(char *str)
// {
// 	int	actual;
// 	int	expected;

// 	actual = ft_atoi(str);
// 	expected = atoi(str);
// 	printf("str: %s\n", str);
// 	printf("actual: %d\n", actual);
// 	printf("expected: %d\n", expected);
// 	if (actual == expected)
// 		printf("OK\n");
// 	else
// 		printf("NG\n");
// }

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;
// 	char	*str5;
// 	char	*str6;
// 	char	*str7;
// 	char	*str8;
// 	char	*str9;
// 	char	*str10;
// 	char	*str11;
// 	char	*str12;
// 	char	*str13;

// 	str1 = "22119223372036854775807";
// 	str2 = "     -2147483648";
// 	str3 = "-222119223372036854775808";
// 	str4 = "0";
// 	str5 = "9223372036854775807";
// 	str6 = "-9223372036854775808";
// 	str7 = "987654321";
// 	str8 = "18446744073709551616";
// 	str9 = "18446744073709551615";
// 	str10 = "18446744073709551614";
// 	str11 = "9223372036854775806";
// 	str12 = "-9223372036854775807";
// 	str13 = "\e06050";
// 	test_ft_atoi(str1);
// 	test_ft_atoi(str2);
// 	test_ft_atoi(str3);
// 	test_ft_atoi(str4);
// 	test_ft_atoi(str5);
// 	test_ft_atoi(str6);
// 	test_ft_atoi(str7);
// 	test_ft_atoi(str8);
// 	test_ft_atoi(str9);
// 	test_ft_atoi(str10);
// 	test_ft_atoi(str11);
// 	test_ft_atoi(str12);
// 	test_ft_atoi(str13);
// 	return (0);
// }
