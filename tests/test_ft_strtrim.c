/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:34:39 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:45:14 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_ft_strtrim(char *str, char *charset)
{
	const char	*s;
	const char	*set;
	char		*result;

	s = (const char *)str;
	set = (const char *)charset;
	result = ft_strtrim(s, set);
	printf("[%s] is to be trimmed by [%s]", str, charset);
	printf("ft_strtrim  : %s\n", result ? result : "NULL");
	free(result);
}

int	main(void)
{
	test_ft_strtrim("*-*-*ABC*-*-*", "*-");
	test_ft_strtrim("   hello    ", " ");
	test_ft_strtrim("!!!123!!!", "!");
	test_ft_strtrim("abcdefg", "hijklmno");
	test_ft_strtrim("12345", "12345");
	test_ft_strtrim("", "");
	return (0);
}
