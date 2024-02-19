/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerpcolor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:08:13 by sakitaha          #+#    #+#             */
/*   Updated: 2024/02/19 22:25:57 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

/**
 * t: 0.0 - 1.0
 */
static unsigned char	lerp(unsigned char start, unsigned char end, float t)
{
	return (start + (unsigned char)((end - start) * t));
}

int	ft_lerpcolor(int color_1, int color_2, float t)
{
	unsigned char	red;
	unsigned char	green;
	unsigned char	blue;
	int				color;

	if (t < 0.0)
	{
		t = 0.0;
	}
	else if (t > 1.0)
	{
		t = 1.0;
	}
	if (color_1 == color_2)
	{
		return (color_1);
	}
	red = lerp((color_1 >> 16) & 0xFF, (color_2 >> 16) & 0xFF, t);
	green = lerp((color_1 >> 8) & 0xFF, (color_2 >> 8) & 0xFF, t);
	blue = lerp(color_1 & 0xFF, color_2 & 0xFF, t);
	color = (red << 16) | (green << 8) | blue;
	return (color);
}
