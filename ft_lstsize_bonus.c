/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:30:16 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/27 03:26:30 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
