/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:58:44 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/27 13:01:38 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	test_ft_lstsize(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	// Case 1: size of an empty list
	list = NULL;
	if (ft_lstsize(list) != 0)
	{
		printf("Test failed: Case 1, size of an empty list\n");
	}
	// Create some nodes
	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");
	// Case 2: size of a list with one node
	list = node1;
	if (ft_lstsize(list) != 1)
	{
		printf("Test failed: Case 2, size of a list with one node\n");
	}
	// Case 3: size of a listÓ with multiple nodes
	node1->next = node2;
	node2->next = node3;
	if (ft_lstsize(list) != 3)
	{
		printf("Test failed: Case 3, size of a list with multiple nodes\n");
	}
	// Cleanup
	free(node1);
	free(node2);
	free(node3);
}

int	main(void)
{
	test_ft_lstsize();
	printf("All test cases passed!\n");
	return (0);
}
