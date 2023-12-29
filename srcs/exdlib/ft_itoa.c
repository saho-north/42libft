/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:50:35 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/27 23:33:15 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

static size_t	count_digits(long long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
	{
		return (1);
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	num_to_str(long long num, char *str, size_t len, bool is_negative)
{
	while (len--)
	{
		str[len + is_negative] = '0' + num % 10;
		num /= 10;
	}
	if (is_negative)
	{
		str[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	long long	num;
	size_t		len;
	bool		is_negative;
	char		*str;

	num = (long long)n;
	is_negative = false;
	if (num < 0)
	{
		is_negative = true;
		num = -num;
	}
	len = count_digits(num);
	str = (char *)ft_calloc(len + is_negative + 1, sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	num_to_str(num, str, len, is_negative);
	return (str);
}
