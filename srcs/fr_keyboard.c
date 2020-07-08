/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_keyboard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int			fdf_check_key(int keycode)
{
	if (keycode == KEY_ESC || keycode == KEY_M ||
			keycode == KEY_J || keycode == KEY_PLUS
			|| keycode == KEY_MINUS || keycode == KEY_SPACE
			|| keycode == KEY_N || keycode == KEY_H
			|| keycode == KEY_S || keycode == KEY_B) //|| keycode == KEY_Z
		return (1);
	return (0);
}

int			fr_key_press(int keycode, t_fr *fr)
{
	if (fdf_check_key(keycode))
	{
		if (keycode == KEY_ESC)
			exit(1);
		if (keycode == KEY_M || keycode == KEY_J || keycode == KEY_N)
			fr_change_map(fr, keycode);
		if (keycode == KEY_PLUS || keycode == KEY_MINUS)
			fr_change_iter(fr, keycode);
		if (keycode == KEY_SPACE)
		    move_to_center(fr);
		if (keycode == KEY_S)
		    moving_image(fr);
		if (keycode == KEY_B)
		    change_color(fr);
		if (keycode == KEY_H)
		    change_help(fr);
//		if (keycode == KEY_Z)
//		    zoom(fr);

	}
	return (0);
}
