/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 02:39:12 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 03:52:04 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cat_str(char const *s1, char const *s2, char *ptr)
{
	while (*s1)
	{
		*(ptr++) = *(s1++);
	}
	while (*s2)
	{
		*(ptr++) = *(s2++);
	}
	*ptr = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == 0)
	{
		ptr = (char *)malloc(1);
		*ptr = 0;
		return (ptr);
	}
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	cat_str(s1, s2, ptr);
	return (ptr);
}

// char	*sep = "...";
// char	*sep5 = "123";
// char	*str1 = "";
// char	*str2 = "Hello";
// char	*str3 = "Hello,  world ";
// char	*str4 = "Hello, world! this is a test";
// char	*str5 = "apple banana grape orange";

// int	main(void)
// {
// 	char	*result;

// 	// Test case 1: No strings
// 	result = ft_strjoin(str1, sep);
// 	printf("Test 1: %s\n", result);
// 	free(result);
// 	// Test case 2: One string
// 	result = ft_strjoin(str2, sep);
// 	printf("Test 2: %s\n", result);
// 	free(result);
// 	// Test case 3: Two strings
// 	result = ft_strjoin(str3, sep);
// 	printf("Test 3: %s\n", result);
// 	free(result);
// 	// Test case 4: Multiple strings with non-alphanumeric separator
// 	result = ft_strjoin(str4, sep);
// 	printf("Test 4: %s\n", result);
// 	free(result);
// 	// Test case 5: Multiple strings with alphanumeric separator
// 	result = ft_strjoin(str5, sep5);
// 	printf("Test 5: %s\n", result);
// 	free(result);
// 	return (0);
// }
