/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 04:49:28 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 05:12:50 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_putnbr_fd(int n, char *filename)
{
	int	fd;

	fd = open(filename, O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Failed to open file");
		return ;
	}
	ft_putnbr_fd(n, fd);
	if (close(fd) == -1)
	{
		perror("Failed to close file");
		return ;
	}
	printf("Successfully wrote number %d to file %s\n", n, filename);
}

int	main(void)
{
	test_ft_putnbr_fd(-42, "test_negative.txt");
	test_ft_putnbr_fd(0, "test_zero.txt");
	test_ft_putnbr_fd(42, "test_small_positive.txt");
	test_ft_putnbr_fd(1234567890, "test_large_positive.txt");
	test_ft_putnbr_fd(42, "/non/existent/directory/test.txt");
	return (0);
}
