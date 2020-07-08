/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_menu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		fr_info_static0(t_fr *fr)
{
	char *txt;

	mlx_string_put(fr->mlx, fr->win,
			WINSIZEX - 153, 5, TEXT_COL1, "Iterations:");
	txt = ft_itoa(fr->iter);
	mlx_string_put(fr->mlx, fr->win,
			WINSIZEX - 40, 5, TEXT_COL2, txt);
	free(txt);
	fr_info_static1(fr);
	fr_info_help(fr);
}

void		fr_info_static1(t_fr *fr)
{
	mlx_string_put(fr->mlx, fr->win, 3, 18,
			T0, "Press <Esc> to exit");
	if (fr->name == MANDELBROT)
        mlx_string_put(fr->mlx, fr->win, 3, 1, T0, "Mandelbrot");
	else if (fr->name == JULIA)
        mlx_string_put(fr->mlx, fr->win, 3, 1, T0, "Julia");
    else
        mlx_string_put(fr->mlx, fr->win, 3, 1, T0, "Natali");
}

void        fr_info_help(t_fr *fr)
{
    mlx_string_put(fr->mlx, fr->win,
                   5, WINSIZEY - 23, T0, "Press     <h>     for help information");
    if (fr->contr.help)
    {
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 13,
                       T0, "SCROLL UP or DOWN to zoom image");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 36,
                       T0, "Press     <s>     to start changing JULIA OR NATALI");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 59,
                       T0, "Press     <j>     to change fractol on JULIA");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 77,
                       T0, "Press     <n>     to change fractol on Natali");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 95,
                       T0, "Press     <m>     to change fractol on MANDELBROT");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 118,
                       T0, "Press     <b>     to change color into blue");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 136,
                       T0, "Press   <space>   to move into base position");
        mlx_string_put(fr->mlx, fr->win, 5, H_Y + 159,
                       T0, "Press LEFT button and move mouse to shift image");
    }
}
