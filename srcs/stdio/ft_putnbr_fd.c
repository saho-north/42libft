/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:55:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/06/03 21:49:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_rec(unsigned int num, int fd)
{
	char	digit_char;

	if (num < 10)
	{
		digit_char = num + '0';
		write(fd, &digit_char, 1);
		return ;
	}
	digit_char = (num % 10) + '0';
	putnbr_rec(num / 10, fd);
	write(fd, &digit_char, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = (unsigned int)((n + 1) * -1);
		num++;
	}
	else
		num = (unsigned int)n;
	putnbr_rec(num, fd);
}
