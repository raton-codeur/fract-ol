/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:31:35 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 16:34:04 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_usage(void)
{
	ft_putstr_fd("please enter a fractal name as parameter. ", 2);
	ft_putendl_fd("you can choose between :", 2);
	ft_putendl_fd("- Mandelbrot", 2);
	ft_putendl_fd("- Julia", 2);
	ft_putendl_fd("you can choose a Julia set with more parameters :", 2);
	ft_putendl_fd("- 1 -> 0.8i for c", 2);
	ft_putendl_fd("- 2 -> -0.835 - 0.2321i for c", 2);
	ft_putendl_fd("- [ 2 custom coordinates for c ]", 2);
}