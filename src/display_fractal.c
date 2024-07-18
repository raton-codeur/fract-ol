/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_fractal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:52:54 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 14:36:20 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	put_pixel_group(t_fractal *fractal, unsigned int i, unsigned int j)
{
	int	n;
	int	m;

	n = 0;
	while (n < PIXEL_SIZE)
	{
		m = 0;
		while (m < PIXEL_SIZE)
		{
			mlx_put_pixel(fractal->img, i + n, j + m, fractal->color);
			m++;
		}
		n++;
	}
}

static void	set_coordinate(t_fractal *fractal, unsigned int i, unsigned int j)
{
	fractal->c.x = fractal->axis[0] \
		+ (fractal->axis[1] - fractal->axis[0]) / WIDTH * i;
	fractal->c.y = fractal->axis[3] \
		- (fractal->axis[3] - fractal->axis[2]) / HEIGHT * j;
}

void	display_fractal(t_fractal *fractal)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < fractal->img->width)
	{
		j = 0;
		while (j < fractal->img->height)
		{
			set_coordinate(fractal, i, j);
			find_color(fractal);
			put_pixel_group(fractal, i, j);
			j += PIXEL_SIZE;
		}
		i += PIXEL_SIZE;
	}
}
