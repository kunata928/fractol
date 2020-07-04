/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		fr_mouse_press(int button, int x, int y, t_fr *fr)
{
	if (button == MOUSE_SCROLL_UP || button == MOUSE_SCROLL_DOWN)
		fr_scale_image_cursor(fr, button, x, y);
	else if (button == MOUSE_LEFT_BUTTON)
		fr->contr.left_button = TRUE;
	return (0);
}

int		fr_mouse_move(int x, int y, t_fr *fr)
{
	if (fr->contr.left_button)
	{
		if (fr->contr.prev_x == 0)
			fr->contr.prev_x = x;
		if (fr->contr.prev_y == 0)
			fr->contr.prev_y = y;
		fr->shift_x += fr->contr.prev_x - x;
		fr->shift_y += fr->contr.prev_y - y;
		fr->contr.prev_x = x;
		fr->contr.prev_y = y;
        plot_image(fr);
	}
	//fr->current.i = y;
	//fr->current.r = x;
	return (0);
}

int			fr_mouse_check(int button, int x, int y, t_fr *fr)
{
	if (button == MOUSE_LEFT_BUTTON)
	{
		fr->contr.left_button = FALSE;
		fr->contr.prev_x = 0;
		fr->contr.prev_y = 0;
	}
	if (x || y)
		return (0);
	return (0);
}