/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_endptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:37:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/22 22:37:55 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_atoi_res	convert_num(const char *str, bool is_negative)
{
	t_atoi_res	result;
	long long	num;
	long long	overflow_limit;

	result.num = 0;
	result.is_valid = false;
	result.endptr = NULL;
	if (*str < '0' || '9' < *str)
		return (result);
	num = 0;
	overflow_limit = (long long)INT_MAX + is_negative;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
		if (num > overflow_limit)
			return (result);
	}
	if (is_negative)
		num *= -1;
	result.num = (int)num;
	result.is_valid = true;
	result.endptr = str;
	return (result);
}

t_atoi_res	ft_atoi_endptr(const char *str)
{
	bool	is_negative;

	is_negative = false;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		is_negative = (*str == '-');
		str++;
	}
	return (convert_num(str, is_negative));
}
