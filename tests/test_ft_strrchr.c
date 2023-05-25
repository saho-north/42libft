/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:30:07 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:33:50 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_strrchr(char *s, int c)
{
	char		*result;
	const char	*str;

	str = (const char *)s;
	result = ft_strrchr(str, c);
	printf("ft_strrchr '%c' in '%s': %s\n", c, str, result ? result : "NULL");
	result = strrchr(str, c);
	printf("strrchr    '%c' in '%s': %s\n", c, str, result ? result : "NULL");
}

int	main(void)
{
	test_ft_strrchr("ABCDECFG", 'C');
	test_ft_strrchr("Hello, World!", 'o');
	test_ft_strrchr("abcdefg", 'd');
	test_ft_strrchr("1234567890", '5');
	test_ft_strrchr("", 'A');
	return (0);
}
