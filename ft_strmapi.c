/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:14:27 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 18:03:58 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	my_function(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	if (len == 0)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// void	test_strmapi(char const *input, char const *expected_output)
// {
// 	char	*actual_output;

// 	actual_output = ft_strmapi(input, &my_function);
// 	printf("Input: %s\n", input);
// 	printf("Expected Output: %s\n", expected_output);
// 	printf("Actual   Output: %s\n", actual_output);
// 	printf("\n");
// 	free(actual_output);
// 	actual_output = NULL;
// }

// int	main(void)
// {
// 	test_strmapi("abcde", "ABCDE");
// 	test_strmapi("Hello World!", "HELLO WORLD!");
// 	test_strmapi("12345", "12345");
// 	test_strmapi("ABCDE", "ABCDE");
// 	return (0);
// }
