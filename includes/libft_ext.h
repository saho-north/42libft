/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ext.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:43:38 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/23 22:55:14 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EXT_H
# define LIBFT_EXT_H

# include "libft.h"

typedef struct s_atoi_res
{
	int			num;
	bool		is_valid;
	const char	*endptr;
}				t_atoi_res;

int				ft_strcasecmp(const char *s1, const char *s2);
void			*ft_realloc(void *ptr, size_t old_size, size_t new_size);
t_atoi_res		ft_atoi_endptr(const char *str);
int				ft_isxdigit(int c);
int				ft_hexchartoi(char c);

#endif
