/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:48:55 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/25 22:56:13 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXDLIB_H
# define FT_EXDLIB_H

# include "ft_stdlib.h"
# include <stdbool.h>

typedef struct s_atoi_res
{
	int			num;
	bool		is_valid;
	const char	*endptr;
}				t_atoi_res;

t_atoi_res		ft_atoi_endptr(const char *str);
char			*ft_itoa(int n);

#endif
