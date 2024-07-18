/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_color_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:47:05 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 18:08:57 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static void	set_rasta(t_fractal *fractal, int n)
{
	n %= 4;
	if (n == 0)
		fractal->color = 0x00FF00FF;
	else if (n == 1)
		fractal->color = 0xFF5555FF;
	else if (n == 2)
		fractal->color = 0xFFFF55FF;
	else
		fractal->color = 0x000000FF;
}

static void	set_rainbow_get_rgb_2(int n, int *r, int *g, int *b)
{
	if (n < 168)
	{
		*r = 0;
		*g = 255 - (double)(n % 42) / 41 * 255;
		*b = 255;
	}
	else if (n < 210)
	{
		*r = (double)(n % 42) / 41 * 255;
		*g = 0;
		*b = 255;
	}
	else
	{
		*r = 255;
		*g = 0;
		*b = 255 - (double)(n % 42) / 41 * 255;
	}
}

static void	set_rainbow_get_rgb_1(int n, int *r, int *g, int *b)
{
	if (n < 42)
	{
		*r = 255;
		*g = (double)n / 41 * 255;
		*b = 0;
	}
	else if (n < 84)
	{
		*r = 255 - (double)(n % 42) / 41 * 255;
		*g = 255;
		*b = 0;
	}
	else if (n < 126)
	{
		*r = 0;
		*g = 255;
		*b = (double)(n % 42) / 41 * 255;
	}
	else
		set_rainbow_get_rgb_2(n, r, g, b);
}

static void	set_rainbow(t_fractal *fractal, int n)
{
	int	r;
	int	g;
	int	b;
	int	step;

	step = 252 / (COLOR_GRADIENT_SIZE - 1);
	if (n != 0)
		n = n * step - 1;
	if (n / 252 % 2)
		n = 251 - (n % 252);
	else
		n %= 252;
	set_rainbow_get_rgb_1(n, &r, &g, &b);
	fractal->color = (r << 24) + (g << 16) + (b << 8) + 255;
}

void	set_color(t_fractal *fractal, int n)
{
	if (fractal->colors == gray)
		set_gray(fractal, n);
	else if (fractal->colors == rasta)
		set_rasta(fractal, n);
	else
		set_rainbow(fractal, n);
}
