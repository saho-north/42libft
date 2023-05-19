/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:12:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 21:55:36 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	convert_num(const char *str)
{
	long long	ov_div;

	ovd = LLONG_MAX / 10;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if (num > ovd || (num == ovd && *(str + 1) - '0' > LLONG_MAX % 10))
		{
			printf("num = %lld, ovd = %lld\n", num, ovd);
			if (sign == 1)
				return (-1);
			else if (sign == -1)
				return (0);
		}
		str++;
	}
	if (sign == -1)
		num *= -1;
}

int	check_sign(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long	num;
	int			sign;

	sign = 1;
	while (*str && !('0' <= *str && *str <= '9'))
	{
		sign = check_sign(*(str++));
	}
	num = 0;
	return ((int)num);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "119223372036854775807";
	str2 = "     -2147483648";
	str3 = "-119223372036854775808";
	printf("%s\n", str1);
	printf("ft_atoi = %d\n", ft_atoi(str1));
	printf("atoi    = %d\n\n", atoi(str1));
	printf("%s\n", str2);
	printf("ft_atoi = %d\n", ft_atoi(str2));
	printf("atoi    = %d\n\n", atoi(str2));
	printf("%s\n", str3);
	printf("ft_atoi = %d\n", ft_atoi(str3));
	printf("atoi    = %d\n", atoi(str3));
	return (0);
}
