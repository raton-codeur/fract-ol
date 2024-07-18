/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mouse_hook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:40:09 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 15:40:34 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_mouse_hook(
	mouse_key_t button, action_t action, modifier_key_t mods, void *param)
{
	t_fractal	*fractal;

	fractal = param;
	(void)mods;
	if (button == MLX_MOUSE_BUTTON_LEFT && action == MLX_PRESS)
		fractal->use_mouse = 1 - fractal->use_mouse;
}
