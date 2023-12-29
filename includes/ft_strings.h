/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:33:32 by sakitaha          #+#    #+#             */
/*   Updated: 2023/12/29 23:22:37 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include "ft_ctype.h"
# include "ft_string.h"
# include <stddef.h>

void	ft_bzero(void *s, size_t n);
int		ft_strcasecmp(const char *s1, const char *s2);

#endif
