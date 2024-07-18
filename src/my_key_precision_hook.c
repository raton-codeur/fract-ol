/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_key_precision_hook.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:34:16 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 19:34:31 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_key_precision_hook(mlx_key_data_t keydata, t_fractal *fractal)
{
	if (keydata.key == MLX_KEY_KP_ADD && keydata.action == MLX_PRESS)
	{
		fractal->max_iteration += 10;
		display_fractal(fractal);
	}
	if (keydata.key == MLX_KEY_KP_SUBTRACT && keydata.action == MLX_PRESS)
	{
		if (fractal->max_iteration > 10)
			fractal->max_iteration -= 10;
		display_fractal(fractal);
	}
}
