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
			|| keycode == KEY_MINUS)
		return (1);
	return (0);
}

void		fdf_turn_in_help(t_fr *fr)
{
//	fdf->condition.help = !(fdf->condition.help);
//	fdf_copy_in_cur(fdf);
//	fdf_eval_cur(fdf);
//	fdf_center(fdf);
//	fdf_plot(fdf);
}

int			fr_key_press(int keycode, t_fr *fr)
{
	if (fdf_check_key(keycode))
	{
		if (keycode == KEY_ESC)
			exit(1);
		if (keycode == KEY_M || keycode == KEY_J)
			fr_change_map(fr, keycode);
		if (keycode == KEY_PLUS || keycode == KEY_MINUS)
		{

			fr_change_iter(fr, keycode);
		}

	}
	return (0);
}
