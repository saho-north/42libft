/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerpcolor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:08:13 by sakitaha          #+#    #+#             */
/*   Updated: 2024/02/20 03:02:27 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_exdlib.h"

static unsigned char	lerp(unsigned char start, unsigned char end, float t)
{
	return ((unsigned char)(start + (end - start) * t));
}

int	ft_lerpcolor(int color_0, int color_1, float t)
{
	unsigned char	red;
	unsigned char	green;
	unsigned char	blue;

	if (t < 0.0)
	{
		t = 0.0;
	}
	else if (t > 1.0)
	{
		t = 1.0;
	}
	if (color_0 == color_1)
	{
		return (color_0);
	}
	red = lerp((color_0 >> 16) & 0xFF, (color_1 >> 16) & 0xFF, t);
	green = lerp((color_0 >> 8) & 0xFF, (color_1 >> 8) & 0xFF, t);
	blue = lerp(color_0 & 0xFF, color_1 & 0xFF, t);
	return ((red << 16) | (green << 8) | blue);
}
