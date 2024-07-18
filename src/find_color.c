/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_color.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:36:03 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 14:46:25 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	find_color(t_fractal *fractal)
{
	if (fractal->type == mandelbrot)
		run_mandelbrot(fractal);
	else
		run_julia(fractal);
}
