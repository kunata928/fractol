/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_change_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		fr_scale_image(t_fr *fr, int keycode, int x, int y)
{
	if (keycode == MOUSE_SCROLL_UP)
		fr->scale *= D_SCALE;
	if (keycode == MOUSE_SCROLL_DOWN)
		fr->scale /= D_SCALE;
	plot_image(fr);
}

void		fr_scale_image_cursor(t_fr *fr, int keycode, int x, int y)
{
    if ((keycode == MOUSE_SCROLL_UP)
        && fr->scale < 0x4FFFFFFF)
    {
        fr->scale *= 1.2;
        fr->shift_x = (int)(fr->shift_x * 1.2 + x * 0.2);
        fr->shift_y = (int)(fr->shift_y * 1.2 + y * 0.2);
    }
    else if (keycode == MOUSE_SCROLL_DOWN)
    {
        fr->scale /= 1.2;
        fr->shift_x = (int)(fr->shift_x / 1.2 - x * 0.1709);
        fr->shift_y = (int)(fr->shift_y / 1.2 - y * 0.1709);
    }
    plot_image(fr);
}

void		fr_change_iter(t_fr *fr, int keycode)
{
	if(keycode == KEY_PLUS)
	{
		if (fr->iter > 150)
			fr->iter += 5;
		else
			fr->iter += 1;
	}
	if(keycode == KEY_MINUS)
	{
		if (fr->iter > 150)
			fr->iter -= 5;
		else
			fr->iter -= 1;
	}
	if (fr->iter < 1)
		fr->iter = 1;
	if (fr->iter > MAX_ITERATION)
		fr->iter = MAX_ITERATION;
	fr_set_color(fr);
	plot_image(fr);
}