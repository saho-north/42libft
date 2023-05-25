/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 04:47:47 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 04:48:18 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	int		fd;
	char	*str;

	str = "42 tokyo";
	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd != -1)
	{
		ft_putendl_fd(str, fd);
		close(fd);
	}
	return (0);
}
