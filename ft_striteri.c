/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:51:48 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 03:51:57 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	my_function(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	test_striteri(char *input, char *expected_output)
// {
// 	char	*str;

// 	str = ft_strdup(input);
// 	printf("Input: %s\n", str);
// 	ft_striteri(str, &my_function);
// 	printf("Expected Output: %s\n", expected_output);
// 	printf("Actual   Output: %s\n", str);
// 	printf("\n");
// 	free(str);
// 	str = NULL;
// }

// int	main(void)
// {
// 	test_striteri("abc", "ace"); // 'a' + 0, 'b' + 1, 'c' + 2
// 	test_striteri("ABC", "ACE"); // 'A' + 0, 'B' + 1, 'C' + 2
// 	test_striteri("123", "135"); // '1' + 0, '2' + 1, '3' + 2
// 	test_striteri("789", "7;="); // '7' + 0, '8' + 1, '9' + 2
// 	test_striteri("", "");       // Empty string, no characters to modify
// 	return (0);
// }
