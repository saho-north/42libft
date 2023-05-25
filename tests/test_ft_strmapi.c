/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:50:50 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 20:52:26 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	my_function(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

static void	test_strmapi(char const *input, char const *expected)
{
	char	*actual;

	actual = ft_strmapi(input, &my_function);
	printf("Input: %s\n", input);
	printf("Actual   Output: %s\n", actual);
	printf("Expected Output: %s\n", expected);
	printf("\n");
	free(actual);
	actual = 0;
}

int	main(void)
{
	test_strmapi("abcde", "ABCDE");
	test_strmapi("Hello World!", "HELLO WORLD!");
	test_strmapi("12345", "12345");
	test_strmapi("ABCDE", "ABCDE");
	return (0);
}
