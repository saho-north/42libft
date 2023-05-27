/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:28:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/27 14:58:32 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	delete_content(void *content)
{
	(void)content;
	//free(content);
}

void	test_ft_lstdelone(void)
{
	char	*content1;
	char	*content2;
	t_list	*node1;
	t_list	*node2;

	// Create some nodes
	content1 = strdup("node1");
	content2 = strdup("node2");
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	// Case 1: delete a standalone node
	ft_lstdelone(node1, delete_content);
	// Case 2: delete a node that is part of a list
	node1 = ft_lstnew(content1); // Re-create node1
	node1->next = node2;
	ft_lstdelone(node1, delete_content);
	// node1 is no longer valid after this line
	if (node2->next != NULL)
	{
		printf("Test failed: Case 2, delete a node that is part of a list\n");
	}
	// Cleanup
	ft_lstdelone(node2, delete_content); // Cleanup the last node
}

int	main(void)
{
	test_ft_lstdelone();
	printf("All test cases passed!\n");
	return (0);
}
