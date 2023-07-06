/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:50:35 by sakitaha          #+#    #+#             */
/*   Updated: 2023/07/07 08:45:43 by sakitaha         ###   ########.fr       */
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
	ptr = (char *)ft_calloc(nbrlen + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (nbr < 0)
	{
		*ptr = '-';
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		ptr[--nbrlen] = nbr % 10 + '0';
		nbr /= 10;
	}
	ptr[--nbrlen] = nbr + '0';
	return (ptr);
}
