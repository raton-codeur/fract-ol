/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_scroll_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 13:48:42 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 19:23:23 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_scroll_hook(double xdelta, double ydelta, void *param)
{
	t_fractal	*fractal;
	int			i;
	int			j;
	double		to_cut;

	(void)xdelta;
	fractal = param;
	mlx_get_mouse_pos(fractal->mlx, &i, &j);
	to_cut = (fractal->axis[1] - fractal->axis[0]) / 3;
	fractal->axis[0] += ydelta * i / (double)WIDTH * to_cut;
	fractal->axis[1] -= ydelta * (1 - i / (double)WIDTH) * to_cut;
	to_cut = (fractal->axis[3] - fractal->axis[2]) / 3;
	fractal->axis[2] += ydelta * (1 - j / (double)HEIGHT) * to_cut;
	fractal->axis[3] -= ydelta * j / (double)HEIGHT * to_cut;
	display_fractal(fractal);
}
