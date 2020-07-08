/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		fr_init(t_fr *fr)
{
	fr->mlx = mlx_init();
	fr->iter = 255;
	fr->current.i = 0;
	fr->current.r = 0;
	fr->scale = 200;
	fr->shift_x = -WINSIZEX / 2;
	fr->shift_y = -WINSIZEY / 2;
	fr->prev_center.r = 1;
	fr->prev_center.i = 1;
	fr->color = (int *)ft_memalloc(sizeof(int) * (fr->iter + 1));
    fr->col_bgum = (int *)ft_memalloc(sizeof(int) * (fr->iter + 1));
	fr_set_color(fr);
    set_color_bubble_gum(fr);
	fr->win = mlx_new_window(fr->mlx, WINSIZEX, WINSIZEY, "fractol");
    fr->pnt.r = (-1 +  fr->shift_x) / fr->scale;
    fr->pnt.i = 0;//( fr->shift_x) / fr->scale;
    fr->contr.left_button = FALSE;
    fr->contr.prev_x = 0;
    fr->contr.prev_y = 0;
    fr->contr.help = 0;
    fr->contr.start_move = 0;
    fr->contr.bg = 0;
}

int			fr_init_map(char *map, t_fr *fr)
{
	if (ft_strlen(map) == 1)
	{
		if (*map == 'M' || *map == 'm')
			fr->name = MANDELBROT;
		else if (*map == 'J' || *map == 'j')
			fr->name = JULIA;
		else if (*map == 'N' || *map == 'n')
		    fr->name = NEUTON;
		else
			return (1);
	}
	else
	{
		if (ft_strequ(map, "Mandelbrot") || ft_strequ(map, "mandelbrot"))
			fr->name = MANDELBROT;
		else if (ft_strequ(map, "Julia") || ft_strequ(map, "julia"))
			fr->name = JULIA;
		else if (ft_strequ(map, "Natali") || ft_strequ(map, "natali"))
		    fr->name = NEUTON;
		else
			return (1);
	}
	return (0);
}

int			fr_read_consol(int ac, char **av, t_fr *fr)
{
	if (ac == 2)
		return (fr_init_map(av[1], fr));
	else
		return (1);
	return (0);
}
