/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:54:57 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 21:22:33 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putendl_fd	与えられたファイルディスクリプタに文字列 's' を出力。改行が続く。

Parameters
s:  The string to output.
fd:  The file descriptor on which to write.

Description
Outputs the string ’s’ to the given file descriptor
followed by a newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s++, 1);
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*str;

// 	str = "42 tokyo";
// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd != -1)
// 	{
// 		ft_putendl_fd(str, fd);
// 		close(fd);
// 	}
// 	return (0);
// }
