/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:30:46 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 15:44:23 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

int	main(int argc, char **argv)
{
	t_fractal	fractal;

	select_fractal(&fractal, argc, argv);
	set_up_fractal(&fractal);
	mlx_scroll_hook(fractal.mlx, my_scroll_hook, &fractal);
	mlx_cursor_hook(fractal.mlx, my_cursor_hook, &fractal);
	mlx_mouse_hook(fractal.mlx, my_mouse_hook, &fractal);
	mlx_key_hook(fractal.mlx, my_key_hook, &fractal);
	display_fractal(&fractal);
	mlx_loop(fractal.mlx);
	mlx_terminate(fractal.mlx);
	return (EXIT_SUCCESS);
}
