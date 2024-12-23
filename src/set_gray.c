/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_gray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:48:25 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 18:19:48 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	set_gray(t_fractal *fractal, int n)
{
	int	step;

	step = 256 / (COLOR_GRADIENT_SIZE - 1);
	if (n != 0)
		n = n * step - 1;
	if (n / 256 % 2)
		n = 255 - (n % 256);
	else
		n %= 256;
	fractal->color = (n << 24) + (n << 16) + (n << 8) + 255;
}
