/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:30:16 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 13:34:32 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst:  The beginning of the list.
The length of the list
Counts the number of nodes in a list.
 */

int	ft_lstsize(t_list *lst)
{
	int	lstlen;

	lst = 0;
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
