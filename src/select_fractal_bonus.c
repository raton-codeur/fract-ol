/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_fractal_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:38:57 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 13:48:03 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	select_fractal(t_fractal *fractal, int argc, char **argv)
{
	if (argc == 1)
		return (print_usage(), exit(EXIT_FAILURE));
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], "Mandelbrot") == 0)
			fractal->type = mandelbrot;
		else if (ft_strcmp(argv[1], "Burning Ship") == 0)
			fractal->type = burning_ship;
		else
			return (print_usage(), exit(EXIT_FAILURE));
	}
	else if (argc == 3)
		select_default_julia(fractal, argv);
	else
		select_custom_julia(fractal, argc, argv);
}
