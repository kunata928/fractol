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
	fr->iter = MAX_ITERATION;
	fr->current.i = 0;
	fr->current.r = 0;
	fr->scale = 1;
	fr->scale_shift_x = 0;
	fr->scale_shift_y = 0;
	fr->shift_x = 0;
	fr->shift_y = 0;
	fr->contr.prev_x = 0;
	fr->contr.prev_y = 0;
	fr->prev_center.r = 1;
	fr->prev_center.i = 1;
	fr->k = (double)4 / (WINSIZEX);
	fr->contr.left_button = FALSE;
	fr->color = (int *)ft_memalloc(sizeof(int) * (fr->iter + 1));
	fr_set_color(fr);
	fr->win = mlx_new_window(fr->mlx, WINSIZEX, WINSIZEY, "fractol");
	//fr->map_name = fr_name_map(fr);
}

int			fr_init_map(char *map, t_fr *fr)
{
	if (ft_strlen(map) == 1)
	{
		if (*map == 'M' || *map == 'm')
			fr->contr.map = 1;
		else if (*map == 'J' || *map == 'j')
			fr->contr.map = 2;
		else
			return (1);
	}
	else
	{
		if (ft_strequ(map, "Mandelbrot") || ft_strequ(map, "mandelbrot"))
			fr->contr.map = 1;
		else if (ft_strequ(map, "Julia") || ft_strequ(map, "julia"))
			fr->contr.map = 2;
		else
			return (1);
	}
	return (0);
}

int			fr_read_consol(int ac, char **av, t_fr *fr)
{
	if (ac == 1)
		fr->contr.map = 2;
	else if (ac == 2)
		return (fr_init_map(av[1], fr));
	else
		return (1);
	return (0);
}

char		*fr_name_map(t_fr *fr)
{
	char	*txt;

	if (fr->contr.map == 1)
		return (ft_strcpy(txt, "Mandelbrot"));
	if (fr->contr.map == 2)
		return (ft_strcpy(txt,"Julia"));
	return ("");
}