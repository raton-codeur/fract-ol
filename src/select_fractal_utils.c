/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_fractal_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:46:53 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 16:31:25 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	is_good_float(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	if (*s == '+' || *s == '-')
		s++;
	if (*s < '0' || *s > '9')
		return (0);
	while (*s >= '0' && *s <= '9')
		s++;
	if (*s == '.' || *s == ',')
		s++;
	while (*s >= '0' && *s <= '9')
		s++;
	return (*s == '\0');
}

void	select_custom_julia(t_fractal *fractal, int argc, char **argv)
{
	if (ft_strcmp(argv[1], "Julia") != 0)
		return (print_usage(), exit(EXIT_FAILURE));
	if (argc == 4)
	{
		if (!is_good_float(argv[2]) || !is_good_float(argv[3]))
		{
			ft_putendl_fd("wrong float argument", 2);
			return (print_usage(), exit(EXIT_FAILURE));
		}
		fractal->type = julia;
		fractal->julia.x = ft_atof(argv[2]);
		fractal->julia.y = ft_atof(argv[3]);
	}
	else
		return (print_usage(), exit(EXIT_FAILURE));
}

void	select_default_julia(t_fractal *fractal, char **argv)
{
	if (ft_strcmp(argv[1], "Julia") != 0)
		return (print_usage(), exit(EXIT_FAILURE));
	if (ft_strcmp(argv[2], "1") == 0)
	{
		fractal->type = julia;
		fractal->julia.x = 0;
		fractal->julia.y = 0.8;
	}
	else if (ft_strcmp(argv[2], "2") == 0)
	{
		fractal->type = julia;
		fractal->julia.x = -0.835;
		fractal->julia.y = -0.2321;
	}
	else
		return (print_usage(), exit(EXIT_FAILURE));
}
