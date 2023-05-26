/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:45:10 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 17:58:49 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/*
Parameters
lst:  The node to free.
del:  The address of the function used to delete
the content.

Description
Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node.  The memory of
’next’ must not be freed.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	tmp = lst;
	lst = lst->next;
	del(tmp);
}
