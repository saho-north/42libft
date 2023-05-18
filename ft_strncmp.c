/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:55:10 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/18 20:55:25 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// char	*str0 = "ABC";
// char	*str1 = "ABD";
// char	*str2 = "AAA";
// char	*str3 = "ABCD";
// char	*str4 = "AB";
// char	*str5 = "B";
// char	*str6 = "A";

// int	main(void)
// {
// 	printf("strncmp    : ABC ABD   = %d\n", strncmp(str0, str1, 2));
// 	printf("ft_strncmp : ABC ABD   = %d\n\n", ft_strncmp(str0, str1, 2));
// 	printf("strncmp    : ABC ABC   = %d\n", strncmp(str0, str0, 1000000));
// 	printf("ft_strncmp : ABC ABC   = %d\n\n", ft_strncmp(str0, str0, 1000000));
// 	printf("strncmp    : ABC: AAA   = %d\n", strncmp(str0, str2, 2));
// 	printf("ft_strncmp : ABC: AAA   = %d\n\n", ft_strncmp(str0, str2, 2));
// 	printf("strncmp    : ABC: ABCD  = %d\n", strncmp(str0, str3, 2));
// 	printf("ft_strncmp : ABC: ABCD  = %d\n\n", strncmp(str0, str3, 2));
// 	printf("strncmp    : ABC: AB    = %d\n", strncmp(str0, str4, 2));
// 	printf("ft_strncmp : ABC: AB    = %d\n\n", ft_strncmp(str0, str4, 2));
// 	printf("strncmp    : ABC: B     = %d\n", strncmp(str0, str5, 2));
// 	printf("ft_strncmp : ABC: B     = %d\n\n", ft_strncmp(str0, str5, 2));
// 	printf("strncmp    : ABC: A     = %d\n", strncmp(str0, str6, 2));
// 	printf("ft_strncmp : ABC: A     = %d\n", ft_strncmp(str0, str6, 2));
// 	return (0);
// }
