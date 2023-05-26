/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:05:15 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 17:58:33 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/*
content:  The content to create the node with.

Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’.  The variable
’next’ is initialized to NULL.

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!content)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = ft_strdup(content);
	if (!node->content)
		return (0);
	node->next = 0;
	return (node);
}
