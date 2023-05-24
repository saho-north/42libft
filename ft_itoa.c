/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:50:35 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/24 03:50:21 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nbrlen(long long nbr)
{
	size_t	nbrlen;

	nbrlen = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		nbrlen++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		nbrlen++;
	}
	return (nbrlen);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	size_t		nbrlen;
	long long	nbr;

	nbr = (long long)n;
	nbrlen = get_nbrlen(nbr);
	ptr = (char *)malloc(nbrlen + 1);
	if (!ptr)
		return (NULL);
	ptr[nbrlen] = '\0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		--nbrlen;
		ptr[nbrlen] = nbr % 10 + '0';
		nbr /= 10;
	}
	ptr[--nbrlen] = nbr + '0';
	return (ptr);
}

// int	main(void)
// {
// 	int		num1;
// 	char	*str1;
// 	int		num2;
// 	char	*str2;
// 	int		num3;
// 	char	*str3;
// 	int		num4;
// 	char	*str4;
// 	int		num5;
// 	char	*str5;
// 	int		n;
// 	char	*d;

// 	//テストケース1: 正の数の変換
// 	num1 = 12345;
// 	str1 = ft_itoa(num1);
// 	printf("Number: %d, String: %s\n", num1, str1);
// 	free(str1);
// 	// テストケース2: 負の数の変換
// 	num2 = -9876;
// 	str2 = ft_itoa(num2);
// 	printf("Number: %d, String: %s\n", num2, str2);
// 	free(str2);
// 	// テストケース3: 0の変換
// 	num3 = 0;
// 	str3 = ft_itoa(num3);
// 	printf("Number: %d, String: %s\n", num3, str3);
// 	free(str3);
// 	// テストケース4: 最大値の変換
// 	num4 = INT_MAX;
// 	str4 = ft_itoa(num4);
// 	printf("Number: %d, String: %s\n", num4, str4);
// 	free(str4);
// 	// テストケース5: 最小値の変換
// 	num5 = INT_MIN;
// 	str5 = ft_itoa(num5);
// 	printf("Number: %d, String: %s\n", num5, str5);
// 	free(str5);
// 	for (int i = 0; i < 2000; i++)
// 	{
// 		n = rand();
// 		d = ft_itoa(n);
// 		if (atoi(d) != n)
// 		{
// 			printf("Test Faild %d\n", n);
// 			return (1);
// 		}
// 	}
// 	printf("OK\n");
// 	return (0);
// }
