/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 17:07:19 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/29 23:11:18 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include "ft_string.h"
# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct s_atoi_res
{
	int		num;
	bool	is_valid;
	char	*endptr;
}			t_atoi_res;

// extended function
t_atoi_res	ft_atoi_endptr(const char *str);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
void		*ft_realloc(void *ptr, size_t old_size, size_t new_size);

#endif
