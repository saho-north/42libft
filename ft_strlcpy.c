/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Saho Kitahara <sakitaha@student.42tokyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:45:13 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/18 18:45:44 by Saho Kitaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ui_ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = ui_ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (*src != '\0' && i + 1 < size)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
		*dest = '\0';
	}
	return (src_len);
}

// char			buf1[] = "A rabbit of commanding presence";
// char			s1[] = "Purple Bear";
// char			buf2[] = "A rabbit of commanding presence";
// char			s2[] = "Purple Bear";

// int	main(void)
// {
// 	printf("\nstrlcpy-----%lu\n", strlcpy(buf1, s1,
// 				(unsigned int)sizeof(buf1)));
// 	printf("%s\n", buf1);
// 	printf("\nft_strlcpy--%u\n", ft_strlcpy(buf2, s2,
// 				(unsigned int)sizeof(buf2)));
// 	printf("%s\n\n", buf2);
// 	printf("\nstrlcpy-----%lu\n", strlcpy(buf1, s1, 30));
// 	printf("%s\n", buf1);
// 	printf("\nft_strlcpy--%u\n", ft_strlcpy(buf2, s2, 30));
// 	printf("%s\n\n", buf2);
// 	return (0);
// }
