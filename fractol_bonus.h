/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:29:38 by qhauuy            #+#    #+#             */
/*   Updated: 2024/05/11 18:18:01 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_BONUS_H
# define FRACTOL_BONUS_H

# include "libft.h"
# include "MLX42/MLX42.h"
# include <math.h>

# define WIDTH 1800
# define HEIGHT 1500
# define PIXEL_SIZE 2
# define COLOR_GRADIENT_SIZE 253

typedef enum e_fractal
{
	mandelbrot,
	julia,
	burning_ship
}	t_type;

typedef struct s_complex
{
	double	x;
	double	y;
}	t_complex;

typedef enum e_colors
{
	gray,
	rasta,
	rainbow
}	t_colors;

typedef struct s_fractal
{
	t_type		type;
	mlx_t		*mlx;
	mlx_image_t	*img;
	double		axis[4];
	t_colors	colors;
	t_complex	julia;
	int			use_mouse;
	t_complex	c;
	int			color;
	int			max_iteration;
}	t_fractal;

/* select_fractal_bonus.c */
void	select_fractal(t_fractal *fractal, int argc, char **argv);

/* select_fractal_utils.c */
int		is_good_float(char *s);
void	select_custom_julia(t_fractal *fractal, int argc, char **argv);
void	select_default_julia(t_fractal *fractal, char **argv);

/* print_usage_bonus.c */
void	print_usage(void);

/* set_up_fractal.c */
void	set_up_fractal(t_fractal *fractal);
void	init_axis(double axis[4]);

/* get_fractal_name_bonus.c */
char	*get_fractal_name(t_fractal *fractal);

/* display_fractal.c */
void	display_fractal(t_fractal *fractal);

/* find_color_bonus.c */
void	find_color(t_fractal *fractal);

/* run_sequence.c */
void	run_mandelbrot(t_fractal *fractal);
void	run_julia(t_fractal *fractal);

/* run_sequence_bonus.c */
void	run_burning_ship(t_fractal *fractal);

/* set_color_bonus.c */
void	set_color(t_fractal *fractal, int n);

/* set_gray.c */
void	set_gray(t_fractal *fractal, int n);

/* my_scroll_hook.c */
void	my_scroll_hook(double xdelta, double ydelta, void *param);

/* my_key_hook_bonus.c */
void	my_key_hook(mlx_key_data_t keydata, void *param);

/* my_key_precision_hook.c */
void	my_key_precision_hook(mlx_key_data_t keydata, t_fractal *fractal);

/* my_arrow_key_hook_bonus.c */
void	my_key_right(t_fractal *fractal);
void	my_key_left(t_fractal *fractal);
void	my_key_down(t_fractal *fractal);
void	my_key_up(t_fractal *fractal);

/* my_mouse_hook.c */
void	my_mouse_hook(\
	mouse_key_t button, action_t action, modifier_key_t mods, void *param);

/* my_cursor_hook.c */
void	my_cursor_hook(double xpos, double ypos, void *param);

/* my_key_type_hook_bonus.c */
void	my_key_type_hook(mlx_key_data_t keydata, t_fractal *fractal);

#endif