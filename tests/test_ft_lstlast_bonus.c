/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:00:59 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/27 13:01:01 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_ft_lstlast(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	// Case 1: last of an empty list
	list = NULL;
	if (ft_lstlast(list) != NULL)
	{
		printf("Test failed: Case 1, last of an empty list\n");
	}
	// Create some nodes
	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");
	// Case 2: last of a list with one node
	list = node1;
	if (ft_lstlast(list) != node1 || strcmp(ft_lstlast(list)->content,
			"node1") != 0)
	{
		printf("Test failed: Case 2, last of a list with one node\n");
	}
	// Case 3: last of a list with multiple nodes
	node1->next = node2;
	node2->next = node3;
	if (ft_lstlast(list) != node3 || strcmp(ft_lstlast(list)->content,
			"node3") != 0)
	{
		printf("Test failed: Case 3, last of a list with multiple nodes\n");
	}
	// Cleanup
	free(node1);
	free(node2);
	free(node3);
}

int	main(void)
{
	test_ft_lstlast();
	printf("All test cases passed!\n");
	return (0);
}
