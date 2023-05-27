/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:34:01 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/28 01:53:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	test_ft_lstnew(void *content, void *expected_content)
{
	t_list	*node;

	node = ft_lstnew(content);
	if (node == 0)
	{
		printf("Test failed: Node is 0\n");
		return (-1);
	}
	if ((node->content == 0 && expected_content != 0) ||
		(node->content != 0 && strcmp(node->content, expected_content) != 0))
	{
		printf("Test failed: Content is not correctly assigned\n");
		return (-1);
	}
	if (node->next != 0)
	{
		printf("Test failed: Next is not 0\n");
		return (-1);
	}
	free(node);
	return (0);
}

int	main(void)
{
	char	*content;

	content = "hello, world";
	if (test_ft_lstnew(content, content) != 0)
	{
		return (-1);
	}
	content = 0;
	if (test_ft_lstnew(content, content) != 0)
	{
		return (-1);
	}
	printf("OK\n");
	return (0);
}
