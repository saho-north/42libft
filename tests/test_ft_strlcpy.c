/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:34:57 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 20:44:58 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		buf1[] = "A rabbit of commanding presence";
char		buf2[] = "A rabbit of commanding presence";
const char	*str = "Purple Bear";

static void	test_ft_strlcpy(char *dst1, char *dst2, const char *src)
{
	printf("ft_strlcpy : %zu\n", ft_strlcpy(dst1, src, (size_t)sizeof(dst1)));
	printf("%s\n", dst1);
	printf("strlcpy    : %zu\n", strlcpy(dst2, src, (size_t)sizeof(dst2)));
	printf("%s\n", dst2);
	printf("ft_strlcpy : %zu\n", ft_strlcpy(dst1, src, 30));
	printf("%s\n", dst1);
	printf("strlcpy    : %zu\n", strlcpy(dst2, src, 30));
	printf("%s\n", dst2);
}

int	main(void)
{
	test_ft_strlcpy(buf1, buf2, str);
	return (0);
}
