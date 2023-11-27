/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:03:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/11/27 21:28:47 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The strcasecmp() function compares the two strings s1 and s2,
 * ignoring the case of the characters.
 * It is the caller's responsibility to ensure non-NULL arguments.
 */

int	ft_strcasecmp(const char *s1, const char *s2)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (str1 == str2)
		return (0);
	while ((*str1 && *str2) && (ft_tolower(*str1) == ft_tolower(*str2)))
	{
		str1++;
		str2++;
	}
	return (ft_tolower(*str1) - ft_tolower(*str2));
}
