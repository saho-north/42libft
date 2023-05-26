/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:38:13 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 13:44:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst:  The address of a pointer to the first link of
a list.
new:  The address of a pointer to the node to be
added to the list.

Adds the node ’new’ at the end of the list.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst || !new)
		return (0);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
