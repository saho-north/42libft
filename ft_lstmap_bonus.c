/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:42:40 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/31 17:30:14 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*lstmaper(t_list *head, t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*prev;
	t_list	*new;

	prev = NULL;
	new = NULL;
	prev = head;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		prev->next = new;
		prev = prev->next;
		lst = lst->next;
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	head = lstmaper(head, lst, f, del);
	return (head);
}
