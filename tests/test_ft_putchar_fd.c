/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:51:59 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 04:44:56 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	int		fd;
	char	*buf;

	buf = "Hello, world!\n";
	fd = open("file.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	while (*buf)
		ft_putchar_fd(*buf++, fd);
	close(fd);
	return (0);
}
