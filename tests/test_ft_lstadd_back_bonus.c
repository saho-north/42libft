/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:25:29 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 21:22:38 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//printf("%d\n", *(int *)test_lst->content);

int	main(int argc, char const *argv[])
{
	t_list	*l;
	t_list	*n;

	(void)argc;
	(void)argv;
	l = ((void *)0);
	n = ft_lstnew(ft_strdup("OK"));
	ft_lstadd_back(&l, n);
	if (l == n && !strcmp(l->content, "OK"))
	{
		free(l->next);
		free(l);
	}
	free(l->next);
	free(l);
	return (0);
}
