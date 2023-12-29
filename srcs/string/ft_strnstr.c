/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:56:51 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/29 23:19:02 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	start;
	size_t	i;

	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	start = 0;
	while (*(haystack + start) && start < len)
	{
		i = 0;
		while (*(haystack + start + i) == *(needle + i) && start + i < len)
		{
			i++;
			if (*(needle + i) == '\0')
				return ((char *)haystack + start);
		}
		start++;
	}
	return (NULL);
}
