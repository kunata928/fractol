/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_plot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		fr_eval(t_pnt pnt, t_pnt s, t_fr *fr)
{
	int		i;
	t_pnt	tmp;

	i = 0;
	while (i < fr->iter && (pnt.r * pnt.r * 0.95 + pnt.i * pnt.i <= 4))
	{
		tmp.r = pnt.r * pnt.r - pnt.i * pnt.i + s.r;
		tmp.i = 2 * pnt.r * pnt.i + s.i;
		pnt.r = tmp.r;
		pnt.i = tmp.i;
		i++;
	}
	return (fr->color[i]);
}

void	fr_plot(t_fr *fr)
{
	int i;
	double dr;
	double di;
	float k;

	i = 0;
	k = (float)4 / WINSIZEX;
	dr = (double)fr->shift_x / 250;
	di = (double)fr->shift_y / 250;
	fr->img_ptr = mlx_new_image(fr->mlx, WINSIZEX, WINSIZEY);
	fr->image = mlx_get_data_addr(fr->img_ptr, &fr->bpp,
			&fr->s_line, &fr->endian);
	fr->pnt.r = -2 + dr;
	fr->pnt.i = -2 + di;
	while (i < WINSIZEX * WINSIZEY)
	{
		if (i % WINSIZEX == 0)
		{
			fr->pnt.r = -2 + dr;
			fr->pnt.i = fr->pnt.i + k;
		}
		*(int*)(fr->image + (int)(i % WINSIZEX) * 4 +
				(int)(i / WINSIZEX) * fr->s_line) = fr_eval(fr->pnt, fr->pnt, fr);
		fr->pnt.r = fr->pnt.r + k;
		i++;
	}
	mlx_put_image_to_window(fr->mlx, fr->win, fr->img_ptr, 0, 0);
	mlx_destroy_image(fr->mlx, fr->img_ptr);
	fdf_info_static0(fr);
}
