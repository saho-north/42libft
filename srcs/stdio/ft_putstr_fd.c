/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:54:19 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/29 21:21:34 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	ssize_t	result;

	if (!s)
	{
		return ;
	}
	len = ft_strlen(s);
	while (len > 0)
	{
		if (len < SSIZE_MAX)
		{
			result = write(fd, s, len);
			break ;
		}
		result = write(fd, s, SSIZE_MAX);
		if (result <= 0)
		{
			break ;
		}
		s += result;
		len -= result;
	}
}
