/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_key_type_hook.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:37:00 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 17:51:42 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_key_type_hook(mlx_key_data_t keydata, t_fractal *fractal)
{
	int		i;
	int		j;
	double	length;

	if (keydata.key == MLX_KEY_M && keydata.action == MLX_PRESS)
	{
		fractal->type = mandelbrot;
		display_fractal(fractal);
	}
	if (keydata.key == MLX_KEY_J && keydata.action == MLX_PRESS)
	{
		fractal->type = julia;
		mlx_get_mouse_pos(fractal->mlx, &i, &j);
		length = fractal->axis[1] - fractal->axis[0];
		fractal->julia.x = fractal->axis[0] + i * length / WIDTH;
		length = fractal->axis[3] - fractal->axis[2];
		fractal->julia.y = fractal->axis[3] - j * length / HEIGHT;
		display_fractal(fractal);
	}
}
