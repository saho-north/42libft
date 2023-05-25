/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:46:02 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/25 21:46:25 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	*sub;

	sub = ft_substr("tripouille", 0, 42000);
	if (sub)
	{
		printf("%s\n", sub);
		free(sub);
	}
	return (0);
}
