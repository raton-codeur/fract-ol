/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_cursor_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:40:50 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 15:40:56 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_cursor_hook(double xpos, double ypos, void *param)
{
	t_fractal	*fractal;
	double		length;

	fractal = param;
	if (fractal->type == julia && fractal->use_mouse)
	{
		length = fractal->axis[1] - fractal->axis[0];
		fractal->julia.x = fractal->axis[0] + xpos * length / WIDTH;
		length = fractal->axis[3] - fractal->axis[2];
		fractal->julia.y = fractal->axis[3] - ypos * length / HEIGHT;
		display_fractal(fractal);
	}
}
