/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:42:40 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 14:47:03 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Parameters
lst:  The address of a pointer to a node.
f:  The address of the function used to iterate on the list.
del:  The address of the function used to delete the content of a node if needed.

Return value
The new list. NULL if the allocation fails.

Description
Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
Creates a new list resulting of the successive applications of the function ’f’.
The ’del’ function is used to delete the content of a node if needed.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;

	if (!lst || !f || !del)
		return (0);
	return (0);
}
