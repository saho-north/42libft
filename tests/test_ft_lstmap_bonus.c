/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 01:55:27 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/28 01:57:27 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>

void	delete_content(void *content)
{
	free(content);
}

void	*double_content(void *content)
{
	int	*value;

	value = malloc(sizeof(int));
	*value = (*(int *)content) * 2;
	return (value);
}

void	test_ft_lstmap(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*result;

	// Prepare a list of integers
	node1 = ft_lstnew(malloc(sizeof(int)));
	node2 = ft_lstnew(malloc(sizeof(int)));
	node3 = ft_lstnew(malloc(sizeof(int)));
	*(int *)node1->content = 1;
	*(int *)node2->content = 2;
	*(int *)node3->content = 3;
	node1->next = node2;
	node2->next = node3;
	// Apply the function to the list
	result = ft_lstmap(node1, double_content, delete_content);
	// Assert the results
	assert(*(int *)result->content == 2);
	assert(*(int *)result->next->content == 4);
	assert(*(int *)result->next->next->content == 6);
	// Clean up
	ft_lstclear(&node1, delete_content);
	ft_lstclear(&result, delete_content);
}

int	main(void)
{
	test_ft_lstmap();
	printf("ok\n");
	return (0);
}
