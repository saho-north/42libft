/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interpolate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:17:39 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/14 22:20:45 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

double	ft_interpolate(double start, double end, double t)
{
	if (t < 0.0)
	{
		t = 0.0;
	}
	else if (t > 1.0)
	{
		t = 1.0;
	}
	if (start == end)
	{
		return (start);
	}
	return (start + (end - start) * t);
}
