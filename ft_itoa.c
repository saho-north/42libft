/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:50:35 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 17:52:59 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nbrlen(long long nbr)
{
	size_t	nbrlen;

	nbrlen = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		nbrlen++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		nbrlen++;
	}
	return (nbrlen);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	size_t		nbrlen;
	long long	nbr;

	nbr = (long long)n;
	nbrlen = get_nbrlen(nbr);
	ptr = (char *)malloc(nbrlen + 1);
	if (!ptr)
		return (NULL);
	ptr[nbrlen] = '\0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		--nbrlen;
		ptr[nbrlen] = nbr % 10 + '0';
		nbr /= 10;
	}
	ptr[--nbrlen] = nbr + '0';
	return (ptr);
}
