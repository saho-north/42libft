/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:30:16 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 17:59:54 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/*
lst:  The beginning of the list.
The length of the list
Counts the number of nodes in a list.
 */

int	ft_lstsize(t_list *lst)
{
	int	lstlen;

	lstlen = 0;
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
			lstlen++;
		}
		lstlen++;
	}
	return (lstlen);
}
