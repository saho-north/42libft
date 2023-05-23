/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:54:19 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 20:52:23 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, &(*(s++)), 1);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*str;

// 	str = "aaaaa.";
// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd != -1)
// 	{
// 		ft_putstr_fd(str, fd);
// 		close(fd);
// 	}
// 	return (0);
// }
