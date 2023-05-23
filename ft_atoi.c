/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:12:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 01:16:48 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	convert_num(const char *str, bool sign)
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
	while (*str && !('0' <= *str && *str <= '9'))
	{
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = false;
			str++;
			break ;
		}
		str++;
	}
	num = convert_num(str, sign);
	return ((int)num);
}

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
// 	char	*n;
// 	char	*str11;
// 	char	*str12;

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
// 	n = "";
// 	printf("0.  %s\n", n);
// 	printf("ft_atoi = %d\n", ft_atoi(n));
// 	printf("atoi    = %d\n", atoi(n));
// 	printf("\n1.  %s\n", str1);
// 	printf("ft_atoi = %d\n", ft_atoi(str1));
// 	printf("atoi    = %d\n\n", atoi(str1));
// 	printf("2.  %s\n", str2);
// 	printf("ft_atoi = %d\n", ft_atoi(str2));
// 	printf("atoi    = %d\n\n", atoi(str2));
// 	printf("3.  %s\n", str3);
// 	printf("ft_atoi = %d\n", ft_atoi(str3));
// 	printf("atoi    = %d\n\n", atoi(str3));
// 	printf("4.  %s\n", str4);
// 	printf("ft_atoi = %d\n", ft_atoi(str4));
// 	printf("atoi    = %d\n\n", atoi(str4));
// 	printf("5.  %s\n", str5);
// 	printf("ft_atoi = %d\n", ft_atoi(str5));
// 	printf("atoi    = %d\n\n", atoi(str5));
// 	printf("6.  %s\n", str6);
// 	printf("ft_atoi = %d\n", ft_atoi(str6));
// 	printf("atoi    = %d\n\n", atoi(str6));
// 	printf("7.  %s\n", str7);
// 	printf("ft_atoi = %d\n", ft_atoi(str7));
// 	printf("atoi    = %d\n\n", atoi(str7));
// 	printf("8.  %s\n", str8);
// 	printf("ft_atoi = %d\n", ft_atoi(str8));
// 	printf("atoi    = %d\n\n", atoi(str8));
// 	printf("9.  %s\n", str9);
// 	printf("ft_atoi = %d\n", ft_atoi(str9));
// 	printf("atoi    = %d\n\n", atoi(str9));
// 	printf("10. %s\n", str10);
// 	printf("ft_atoi = %d\n", ft_atoi(str10));
// 	printf("atoi    = %d\n\n", atoi(str10));
// 	printf("11. %s\n", str11);
// 	printf("ft_atoi = %d\n", ft_atoi(str11));
// 	printf("atoi    = %d\n\n", atoi(str11));
// 	printf("12. %s\n", str12);
// 	printf("ft_atoi = %d\n", ft_atoi(str12));
// 	printf("atoi    = %d\n\n", atoi(str12));
// 	return (0);
// }
