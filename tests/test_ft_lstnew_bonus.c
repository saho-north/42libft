/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:20:09 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/26 21:35:05 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char const *argv[])
{
	t_list	*lst;
	char	*str;
	int		val;

	(void)argc;
	(void)argv;
	lst = 0;
	/* ptr to char */
	str = "hello world";
	lst = ft_lstnew(str);
	/* 1 */ ASSERT_EQ_PTR(lst->content, str);
	/* 2 */ ASSERT_EQ_PTR(lst->next, NULL);
	/* ptr to int */
	val = 100;
	lst = ft_lstnew(&val);
	/* 3 */ ASSERT_EQ_PTR(lst->content, &val);
	/* 4 */ ASSERT_EQ_PTR(lst->next, NULL);
	/* NULL */
	lst = ft_lstnew(NULL);
	/* 5 */ ASSERT_EQ_PTR(lst->content, NULL);
	/* 6 */ ASSERT_EQ_PTR(lst->next, NULL);
	return (0);
	return (0);
}

int	main(void)
{
	t_list	*lst;
	char	*str;
	int		val;

	lst = NULL;
	/* ptr to char */
	str = "hello world";
	lst = ft_lstnew(str);
	/* 1 */ ASSERT_EQ_PTR(lst->content, str);
	/* 2 */ ASSERT_EQ_PTR(lst->next, NULL);
	/* ptr to int */
	val = 100;
	lst = ft_lstnew(&val);
	/* 3 */ ASSERT_EQ_PTR(lst->content, &val);
	/* 4 */ ASSERT_EQ_PTR(lst->next, NULL);
	/* NULL */
	lst = ft_lstnew(NULL);
	/* 5 */ ASSERT_EQ_PTR(lst->content, NULL);
	/* 6 */ ASSERT_EQ_PTR(lst->next, NULL);
	return (0);
}
