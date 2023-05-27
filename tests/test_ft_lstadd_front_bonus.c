/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:20:12 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/28 01:52:44 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_lstadd_front(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*list;

	// Create some nodes
	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");
	// Case 1: add to an empty list
	list = NULL;
	ft_lstadd_front(&list, node1);
	if (list != node1 || strcmp(list->content, "node1") != 0
		|| list->next != NULL)
	{
		printf("Test failed: Case 1, add to an empty list\n");
	}
	// Case 2: add to a non-empty list
	ft_lstadd_front(&list, node2);
	if (list != node2 || strcmp(list->content, "node2") != 0
		|| list->next != node1)
	{
		printf("Test failed: Case 2, add to a non-empty list\n");
	}
	// Case 3: add another node to a non-empty list
	ft_lstadd_front(&list, node3);
	if (list != node3 || strcmp(list->content, "node3") != 0
		|| list->next != node2)
	{
		printf("Test failed: Case 3, add another node to a non-empty list\n");
	}
	// Cleanup
	free(node1);
	free(node2);
	free(node3);
}

int	main(void)
{
	test_ft_lstadd_front();
	printf("All test cases passed!\n");
	return (0);
}
