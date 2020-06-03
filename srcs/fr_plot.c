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

void	fr_color_mbrot(t_pnt pnt, t_pnt s, t_fr *fr)
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
    *(int*)(fr->image + (int)(i % WINSIZEX) * 4 +
            (int)(i / WINSIZEX) * fr->s_line) = fr->color[i];
}

void    plot_image(t_fr *fr)
{
    fr->img_ptr = mlx_new_image(fr->mlx, WINSIZEX, WINSIZEY);
    fr->image = mlx_get_data_addr(fr->img_ptr, &fr->bpp,
                                  &fr->s_line, &fr->endian);
    fr_evaluate(fr);
    mlx_put_image_to_window(fr->mlx, fr->win, fr->img_ptr, 0, 0);
    mlx_destroy_image(fr->mlx, fr->img_ptr);
    fr_info_static0(fr);
}

void	fr_thread_mandelbrot(void *thread_data)
{
	int		i;
	int     j;
	double	k;
	t_datas *data;

	data = (t_datas *)thread_data;
	i = data->start_x;
	k = (double)(4 * fr->scale) / WINSIZEX;
	fr->k = k;
	fr->pnt.r = -2 * fr->scale  + fr->shift_x * k + fr->scale_shift_x;
	fr->pnt.i = -2 * fr->scale + fr->shift_y * k + fr->scale_shift_y;
	while (i < data->end_x)
	{
	    j = 0;
	    while (j < WINSIZEY)
	    {

	        j++;
	    }
		if (i % WINSIZEX == 0)
		{
			fr->pnt.r = -2 * fr->scale + fr->shift_x * k + fr->scale_shift_x;
			fr->pnt.i = fr->pnt.i + k;
		}
        fr_color_mbrot(fr->pnt, fr->pnt, data->fr);
		fr->pnt.r = fr->pnt.r + k;
		i++;
	}
}

//void     fr_thread_julia(void *thread_data);
//int		i;
//double	k;
//t_datas *data;
//
//data = (t_datas *)thread_data;
//i = 0;
//k = (double)(4 * fr->scale) / WINSIZEX;
//fr->k = k;
//fr->pnt.r = -2 * fr->scale  + fr->shift_x * k + fr->scale_shift_x;
//fr->pnt.i = -2 * fr->scale + fr->shift_y * k + fr->scale_shift_y;
//while (i < WINSIZEX * WINSIZEY)
//{
//if (i % WINSIZEX == 0)
//{
//fr->pnt.r = -2 * fr->scale + fr->shift_x * k + fr->scale_shift_x;
//fr->pnt.i = fr->pnt.i + k;
//}
//fr_color_mbrot(fr->pnt, fr->pnt, fr);
//fr->pnt.r = fr->pnt.r + k;
//i++;
//}