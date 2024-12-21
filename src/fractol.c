/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:30:46 by qhauuy            #+#    #+#             */
/*   Updated: 2024/11/13 15:12:06 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_fractal	fractal;

	select_fractal(&fractal, argc, argv);
	set_up_fractal(&fractal);
	mlx_scroll_hook(fractal.mlx, my_scroll_hook, &fractal);
	mlx_key_hook(fractal.mlx, my_key_hook, &fractal);
	mlx_cursor_hook(fractal.mlx, my_cursor_hook, &fractal);
	mlx_mouse_hook(fractal.mlx, my_mouse_hook, &fractal);
	display_fractal(&fractal);
	mlx_loop(fractal.mlx);
	mlx_terminate(fractal.mlx);
	return (EXIT_SUCCESS);
}
