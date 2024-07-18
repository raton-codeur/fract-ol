/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fractal_name.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:29:34 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/10 15:02:07 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

char	*get_fractal_name(t_fractal *fractal)
{
	if (fractal->type == mandelbrot)
		return ("Mandelbrot");
	else
		return ("Julia");
}
