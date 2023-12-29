/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:45:10 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/27 23:30:45 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *)) {
  if (!lst)
    return ;
  if (lst->content)
    del(lst->content);
  free(lst);
}
