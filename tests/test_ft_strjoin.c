/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:14:49 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 17:19:57 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*sep = "...";
char		*sep5 = "123";
char		*str1 = "";
char		*str2 = "Hello";
char		*str3 = "Hello,  world ";
char		*str4 = "Hello, world! this is a test";
char		*str5 = "apple banana grape orange";

static void	test_ft_strjoin(size_t test_no, char *str, char sep)
{
	char	*result;

	result = ft_strjoin(str1, sep);
	printf("Test %lld: %s\n\n", test_no, result);
	free(result);
}

int	main(void)
{
	char	*result;
	size_t	i;

	i = 0;
	// Test case 1: No strings
	test_ft_strjoin(i++, str1, sep);
	// Test case 2: One string
	test_ft_strjoin(i++, str2, sep);
	// Test case 3: Two strings
	test_ft_strjoin(i++, str3, sep);
	// Test case 4: Multiple strings with non-alphanumeric separator
	test_ft_strjoin(i++, str4, sep);
	// Test case 5: Multiple strings with alphanumeric separator
	test_ft_strjoin(i++, str5, sep5);
	return (0);
}
