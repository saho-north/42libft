/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:42:40 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/27 04:42:28 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    lstの各ノードに対して、f関数を適用し、新しいノードを作成する。
    新しいノードはft_lstnew関数を使用して作成する。
    各新しいノードをリストに追加する。
    最後に、新しいリストの先頭ノードを返す。

ただし、完全な実装を行うには、提供していただいたコードの他の部分（create_new関数など）や、
 ft_lstnew関数の実装も必要です。それらの情報が提供されると、より具体的な支援ができるかと思います。
 */

t_list	*create_new(t_list *lst, void *(*f)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	tmp = new;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
			return (0);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;

	if (!lst || !f || !del)
		return (NULL);
	head = (t_list **)malloc(sizeof(t_list *));
	if (!head)
		return (NULL);
	*head = NULL;
	return (NULL);
}
