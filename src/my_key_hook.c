/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 13:47:06 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 16:36:12 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

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
}
