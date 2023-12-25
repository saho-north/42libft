/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:56:11 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/25 17:02:46 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
* The isxdigit() function returns zero if the character tests false
* and returns non-zero if the character tests true.
*/

int	ft_isxdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	if (('a' <= c && c <= 'f') || ('A' <= c && c <= 'F'))
		return (1);
	return (0);
}
