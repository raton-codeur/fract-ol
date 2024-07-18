/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_arrow_key_hook_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:56:02 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 20:03:48 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_key_right(t_fractal *fractal)
{
	fractal->axis[0] += (fractal->axis[1] - fractal->axis[0]) / 10;
	fractal->axis[1] += (fractal->axis[1] - fractal->axis[0]) / 10;
	display_fractal(fractal);
}

void	my_key_left(t_fractal *fractal)
{
	fractal->axis[0] -= (fractal->axis[1] - fractal->axis[0]) / 10;
	fractal->axis[1] -= (fractal->axis[1] - fractal->axis[0]) / 10;
	display_fractal(fractal);
}

void	my_key_down(t_fractal *fractal)
{
	fractal->axis[2] -= (fractal->axis[3] - fractal->axis[2]) / 10;
	fractal->axis[3] -= (fractal->axis[3] - fractal->axis[2]) / 10;
	display_fractal(fractal);
}

void	my_key_up(t_fractal *fractal)
{
	fractal->axis[2] += (fractal->axis[3] - fractal->axis[2]) / 10;
	fractal->axis[3] += (fractal->axis[3] - fractal->axis[2]) / 10;
	display_fractal(fractal);
}
