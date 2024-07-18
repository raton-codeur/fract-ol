/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_sequence_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:44:57 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 19:58:20 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	run_burning_ship(t_fractal *fractal)
{
	int			n;
	t_complex	z_n;
	double		x;
	double		y;

	n = 0;
	z_n.x = 0;
	z_n.y = 0;
	while (n < fractal->max_iteration)
	{
		x = fabs(z_n.x);
		y = fabs(z_n.y);
		z_n.x = x * x - y * y + fractal->c.x;
		z_n.y = 2 * x * y + fractal->c.y;
		if (z_n.x * z_n.x + z_n.y * z_n.y > 4)
			return (set_color(fractal, n));
		n++;
	}
	fractal->color = 0x000000FF;
}
