/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 01:47:04 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/28 01:48:16 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_node;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*new_node3;

	// テストケース1: リストが空の場合
	{
		lst = NULL;
		ft_lstiter(lst, print_content);
	}
	// テストケース2: リストが1つの要素を持つ場合
	{
		lst = ft_lstnew("Hello");
		new_node = ft_lstnew("World");
		lst->next = new_node;
		ft_lstiter(lst, print_content);
	}
	// テストケース3: リストが複数の要素を持つ場合
	{
		lst = ft_lstnew("This");
		new_node1 = ft_lstnew("is");
		new_node2 = ft_lstnew("a");
		new_node3 = ft_lstnew("test");
		lst->next = new_node1;
		new_node1->next = new_node2;
		new_node2->next = new_node3;
		ft_lstiter(lst, print_content);
	}
	return (0);
}
