/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:55:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 04:49:22 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_rec(long long num, int fd)
{
	char	digit_char;
	ssize_t	check;

	if (num < 10)
	{
		digit_char = num + '0';
		check = write(fd, &digit_char, 1);
		if (check == -1)
			return ;
		return ;
	}
	digit_char = (num % 10) + '0';
	putnbr_rec(num / 10, fd);
	check = write(fd, &digit_char, 1);
	if (check == -1)
		return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	num;
	ssize_t		check;

	num = (long long)n;
	if (num < 0)
	{
		check = write(fd, "-", 1);
		if (check == -1)
			return ;
		num *= -1;
	}
	putnbr_rec(num, fd);
}
