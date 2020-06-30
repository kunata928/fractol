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

void	fr_color_mbrot(t_pnt pnt, t_pnt s, t_fr *fr, int x, int y)
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
    int		*t;
    t = (int*)fr->image;
    if (x >= 0 && x <= WINSIZEX
        && y >= 0 && y <= WINSIZEY)
        t[WINSIZEX * y + x] = fr->color[i];
    //*(int*)(fr->image + WINSIZEY * y + x) = fr->color[i];
}
//(int)(i % WINSIZEX) * 4 +
//            (int)(i / WINSIZEX) * fr->s_line

void    plot_image(t_fr *fr)
{
    fr->img_ptr = mlx_new_image(fr->mlx, WINSIZEX, WINSIZEY);
    fr->image = mlx_get_data_addr(fr->img_ptr, &fr->bpp,
                                  &fr->s_line, &fr->endian);
    fr_evaluate(fr);
//    t_datas *data;
//    data = (t_datas*)malloc(sizeof(t_datas));
//    data->fr = fr;
//    data->start_x = 0;
//    data->end_x = WINSIZEX;
//    fr_thread_mandelbrot((void *)data);
    mlx_put_image_to_window(fr->mlx, fr->win, fr->img_ptr, 0, 0);
    mlx_destroy_image(fr->mlx, fr->img_ptr);
    fr_info_static0(fr);
}

void	*fr_thread_mandelbrot(void *thread_data)
{
	int		x;
	int     y;
	t_pnt   c;
	t_datas *data;

	data = (t_datas *)thread_data;
	x = data->start_x;
    c.i = 0;
    c.r = 0;
	while (x < data->end_x)
	{
	    y = 0;
	    data->fr->pnt.r = (double)(x + data->fr->shift_x) / data->fr->scale;
	    while (y < WINSIZEY)
	    {
	        data->fr->pnt.i = (double)(y + data->fr->shift_y) / data->fr->scale;
            fr_color_mbrot(c, data->fr->pnt, data->fr, x, y);
	        y++;
	    }
		x++;
	}
	return (NULL);
}

void     fr_thread_julia(void *thread_data);

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