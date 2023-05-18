/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:00:53 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 20:52:25 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	char	to_find;
	int		len;

	to_find = (char)c;
	len = 0;
	while (s[len])
	{
		len++;
	}
	while (len >= 0)
	{
		if (s[len] == to_find)
			return (&s[len]);
		len--;
	}
	return (0);
}

char	*str = "ABCDECFG";

int	main(void)
{
	printf("ft_strrchr for last C : %s\n", ft_strrchr(str, 'C'));
	printf("strrchr    for last C : %s\n", strrchr(str, 'C'));
}
