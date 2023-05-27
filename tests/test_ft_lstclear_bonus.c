/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:00:00 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/27 16:12:00 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>

void	delete_content(void *content)
{
    free(content);
}

void	test_ft_lstclear(void)
{
    char	*content1;
    char	*content2;
    t_list	*node1;
    t_list	*node2;
    t_list	*list;

    // Create some nodes
    content1 = strdup("node1");
    content2 = strdup("node2");
    node1 = ft_lstnew(content1);
    node2 = ft_lstnew(content2);
    node1->next = node2;

    list = node1;
    ft_lstclear(&list, delete_content);

    assert(list == NULL);
}

int	main(void)
{
    test_ft_lstclear();
    printf("All test cases passed!\n");
    return (0);
}
