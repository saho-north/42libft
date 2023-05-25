/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:05:06 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 17:14:02 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	my_function(unsigned int i, char *c)
{
	*c = *c + i;
}

static void	test_ft_striteri(char *input, char *expected_output)
{
	char	*str;

	str = ft_strdup(input);
	printf("Input: %s\n", str);
	ft_striteri(str, &my_function);
	printf("Actual   Output: %s\n", str);
	printf("Expected Output: %s\n", expected_output);
	printf("\n");
	free(str);
	str = 0;
}

int	main(void)
{
	test_ft_striteri("abc", "ace"); // 'a' + 0, 'b' + 1, 'c' + 2
	test_ft_striteri("ABC", "ACE"); // 'A' + 0, 'B' + 1, 'C' + 2
	test_ft_striteri("123", "135"); // '1' + 0, '2' + 1, '3' + 2
	test_ft_striteri("789", "7;="); // '7' + 0, '8' + 1, '9' + 2
	test_ft_striteri("", "");       // Empty string, no characters to modify
	return (0);
}
