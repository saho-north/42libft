/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:42:40 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/28 01:31:55 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*prev;
	t_list	*new;
	void	*content;
	bool	is_first;

	head = NULL;
	prev = NULL;
	new = NULL;
	content = NULL;
	is_first = true;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (is_first)
		{
			head = new;
			is_first = false;
			prev = head;
		}
		else
		{
			prev->next = new;
			prev = prev->next;
		}
		lst = lst->next;
	}
	return (head);
}
