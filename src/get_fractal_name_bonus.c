/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fractal_name_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:30:19 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 14:30:23 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

char	*get_fractal_name(t_fractal *fractal)
{
	if (fractal->type == mandelbrot)
		return ("Mandelbrot");
	else if (fractal->type == julia)
		return ("Julia");
	else
		return ("Burning Ship");
}
