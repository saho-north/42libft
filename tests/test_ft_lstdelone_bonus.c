/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:28:30 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 14:28:43 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	del_lst(t_list *lst)
{
	if (!lst)
		return ;
	if (lst->content)
	{
		free(lst->content);
		lst->content = 0;
	}
	free(lst);
	lst = 0;
}
