/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:55:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 22:54:27 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putnbr_fd	与えられたファイルディスクリプタに数値 'n' を出力。

Parameters
n:  The integer to output.
fd:  The file descriptor on which to write.

Description
Outputs the integer ’n’ to the given file
descriptor.
*/

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

// void	test_ft_putnbr_fd(int n, char *filename)
// {
// 	int	fd;

// 	fd = open(filename, O_WRONLY | O_CREAT, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Failed to open file");
// 		return ;
// 	}
// 	ft_putnbr_fd(n, fd);
// 	if (close(fd) == -1)
// 	{
// 		perror("Failed to close file");
// 		return ;
// 	}
// 	printf("Successfully wrote number %d to file %s\n", n, filename);
// }

// int	main(void)
// {
// 	test_ft_putnbr_fd(-42, "test_negative.txt");
// 	// Test with negative number
// 	test_ft_putnbr_fd(0, "test_zero.txt"); // Test with zero
// 	test_ft_putnbr_fd(42, "test_small_positive.txt");
// 	// Test with small positive number
// 	test_ft_putnbr_fd(1234567890, "test_large_positive.txt");
// 	// Test with large positive number
// 	test_ft_putnbr_fd(42, "/non/existent/directory/test.txt");
// 	// Test with file that cannot be opened
// 	return (0);
// }
