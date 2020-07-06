/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		fr_change_map(t_fr *fr, int key)
{
	if (key == KEY_M)
    {
        fr->name = MANDELBROT;
        fr->contr.map = "Mandelbrot";
    }
	else if (key == KEY_J)
    {
        fr->name = JULIA;
        fr->contr.map = "Julia";
    }
	else if (key == KEY_N)
    {
        fr->name = NEUTON;
        fr->contr.map = "Neuton";
    }
	move_to_center(fr);
	plot_image(fr);
}
