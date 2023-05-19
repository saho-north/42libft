/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:12:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 18:56:33 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	sign;
	long long	num;

	sign = 1;
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			break ;
		else if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = -1;
			str++;
			break ;
		}
		str++;
	}
	num = 0;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return ((int)(sign * num));
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "       \n \t \f \v \r---+--+1234ab567";
// 	str2 = "     -2147483648";
// 	str3 = "--++-+-23r90";
// 	printf("%s\n", str1);
// 	printf("ft_atoi = %d\n", ft_atoi(str1));
// 	printf("atoi    = %d\n\n", atoi(str1));
// 	printf("%s\n", str2);
// 	printf("ft_atoi = %d\n", ft_atoi(str2));
// 	printf("atoi    = %d\n\n", atoi(str2));
// 	printf("%s\n", str3);
// 	printf("ft_atoi = %d\n", ft_atoi(str3));
// 	printf("atoi    = %d\n\n", atoi(str3));
// 	return (0);
// }
