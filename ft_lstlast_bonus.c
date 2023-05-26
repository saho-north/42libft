/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:35:23 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 18:44:09 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst:  The beginning of the list.
Return Last node of the list
None
Returns the last node of the list.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
