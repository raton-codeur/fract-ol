/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_fractal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:39:45 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 17:11:21 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static void	mlx_print_error(void)
{
	ft_putstr_fd((char *)mlx_strerror(mlx_errno), 2);
}

void	init_axis(double axis[4])
{
	axis[0] = 2 - (WIDTH * 4 / (double)HEIGHT);
	axis[1] = 2;
	axis[2] = -2;
	axis[3] = 2;
}

void	set_up_fractal(t_fractal *fractal)
{
	fractal->mlx = mlx_init(WIDTH, HEIGHT, get_fractal_name(fractal), false);
	if (fractal->mlx == NULL)
		return (mlx_print_error(), exit(EXIT_FAILURE));
	fractal->img = mlx_new_image(fractal->mlx, WIDTH, HEIGHT);
	if (fractal->img == NULL)
	{
		mlx_print_error();
		return (mlx_terminate(fractal->mlx), exit(EXIT_FAILURE));
	}
	if (mlx_image_to_window(fractal->mlx, fractal->img, 0, 0) < 0)
	{
		mlx_print_error();
		return (mlx_terminate(fractal->mlx), exit(EXIT_FAILURE));
	}
	init_axis(fractal->axis);
	fractal->colors = gray;
	fractal->max_iteration = 50;
	fractal->use_mouse = 0;
}
