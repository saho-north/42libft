/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:28:52 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 13:39:07 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	free_split(char **arr)
{
	size_t	i;

	if (!arr)
		return ;
	for (i = 0; arr[i]; i++)
		free(arr[i]);
	free(arr);
}

void	test_split(char *str, char delimiter)
{
	char	**ans;
	size_t	i;

	ans = ft_split(str, delimiter);
	if (!ans)
	{
		printf("ft_split returned NULL\n");
		return ;
	}
	i = 0;
	while (ans[i])
	{
		printf("%s\n", ans[i]);
		i++;
	}
	printf("\n");
	free_split(ans);
}

int	main(void)
{
	test_split("_hello____world____japan____42____42Tokyo", '_');
	test_split("split this string", ' ');
	test_split("one|two|three|four|five", '|');
	test_split("comma,separated,values", ',');
	test_split("\0aa\0bbb", '\0');
	test_split("_", '\0');
	return (0);
}
