/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:14:49 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 00:32:16 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*sep = "...";
char		*str1 = "";
char		*str2 = "Hello";
char		*str3 = "Hello,  world ";
char		*str4 = "Hello, world! this is a test";
char		*str5 = "apple banana grape orange";

static void	test_ft_strjoin(size_t no, char *str, char *sep)
{
	char	*result;

	result = ft_strjoin((const char *)str, (const char *)sep);
	printf("Test %zu: %s\n\n", no, result);
	free(result);
}

int	main(void)
{
	size_t	i;

	i = 0;
	test_ft_strjoin(i++, str1, sep);
	test_ft_strjoin(i++, str2, sep);
	test_ft_strjoin(i++, str3, sep);
	test_ft_strjoin(i++, str4, sep);
	test_ft_strjoin(i++, str5, sep);
	return (0);
}
