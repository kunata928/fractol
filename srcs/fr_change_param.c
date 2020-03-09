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

void			fr_scale_image(int keycode, t_fr *fr, int x, int y)
{

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
	fr_plot(fr);
}