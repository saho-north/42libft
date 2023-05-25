/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:14:12 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 06:10:51 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	int		fd;
	char	*str;

	str = "aaaaa.";
	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd != -1)
	{
		ft_putstr_fd(str, fd);
		close(fd);
	}
	return (0);
}
