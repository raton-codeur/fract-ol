/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_color_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:46:00 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 14:46:10 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	find_color(t_fractal *fractal)
{
	if (fractal->type == mandelbrot)
		run_mandelbrot(fractal);
	else if (fractal->type == julia)
		run_julia(fractal);
	else
		run_burning_ship(fractal);
}
