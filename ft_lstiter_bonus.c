/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:37:54 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 18:44:13 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst:  The address of a pointer to a node.
f:  The address of the function used to iterate on the list.

Description
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst);
		if (lst->next)
			lst = lst->next;
	}
}
