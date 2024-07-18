/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_key_hook_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:32:48 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 16:37:37 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static void	my_key_number_hook(mlx_key_data_t keydata, t_fractal *fractal)
{
	if (keydata.key == MLX_KEY_1 && keydata.action == MLX_PRESS)
	{
		fractal->colors = gray;
		display_fractal(fractal);
	}
	else if (keydata.key == MLX_KEY_2 && keydata.action == MLX_PRESS)
	{
		fractal->colors = rasta;
		display_fractal(fractal);
	}
	else if (keydata.key == MLX_KEY_3 && keydata.action == MLX_PRESS)
	{
		fractal->colors = rainbow;
		display_fractal(fractal);
	}
}

void	my_key_hook(mlx_key_data_t keydata, void *param)
{
	t_fractal	*fractal;

	fractal = param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(fractal->mlx);
	else if (keydata.key == MLX_KEY_R && keydata.action == MLX_PRESS)
	{
		init_axis(fractal->axis);
		display_fractal(fractal);
	}
	my_key_precision_hook(keydata, fractal);
	my_key_type_hook(keydata, fractal);
	if (keydata.key == MLX_KEY_UP && keydata.action == MLX_PRESS)
		my_key_up(fractal);
	else if (keydata.key == MLX_KEY_DOWN && keydata.action == MLX_PRESS)
		my_key_down(fractal);
	else if (keydata.key == MLX_KEY_LEFT && keydata.action == MLX_PRESS)
		my_key_left(fractal);
	else if (keydata.key == MLX_KEY_RIGHT && keydata.action == MLX_PRESS)
		my_key_right(fractal);
	my_key_number_hook(keydata, fractal);
}
