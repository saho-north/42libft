/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:03:18 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 17:04:34 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_strdup(const char *src)
{
	char	*dest;

	dest = ft_strdup(src);
	//文字列のアドレス
	printf("src  : %s   src  : %p\n", src, (void *)src);
	printf("dest : %s   dest : %p\n", dest, (void *)dest);
	//変数自体のアドレス
	printf("src  : %s   &src  : %p\n", src, &src);
	printf("dest : %s   &dest : %p\n", dest, &dest);
	free(dest);
}

int	main(void)
{
	test_ft_strdup("hello");
	test_ft_strdup("test string");
	test_ft_strdup("");
	test_ft_strdup("longer string example");
	test_ft_strdup("1234567890");
	return (0);
}
