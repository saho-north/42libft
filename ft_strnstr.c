/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:56:51 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:01:19 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	head;
	size_t	i;

	ptr = (char *)haystack;
	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0')
		return (ptr);
	head = 0;
	while (ptr[head] && head < len)
	{
		i = 0;
		while (ptr[head + i] == needle[i] && head + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&ptr[head]);
		}
		head++;
	}
	return (0);
}
