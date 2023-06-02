/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:12:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/06/02 16:03:14 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	convert_num(const char *str, bool sign)
{
	long long	ov_div;
	long long	ov_mod;
	long long	num;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	if (!sign)
		ov_mod++;
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
