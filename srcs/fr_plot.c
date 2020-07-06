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

void	*fr_thread_mandelbrot(void *thread_data)
{
	int		x;
	int     y;
	t_pnt   c;
	t_pnt   n;
	t_datas *data;

	data = (t_datas *)thread_data;
	x = data->start_x;
    c.i = 0;
    c.r = 0;
	while (x < data->end_x)
	{
	    y = 0;
	    n.r = (double)(x + data->fr->shift_x) / data->fr->scale;
	    while (y < WINSIZEY)
	    {
	        n.i = (double)(y + data->fr->shift_y) / data->fr->scale;
            fr_color_mbrot(c, n, data->fr, x, y);
	        y++;
	    }
		x++;
	}
	return (NULL);
}

void     *fr_thread_julia(void *thread_data)
{
    t_datas *data;
    int		x;
    int		y;
    t_pnt	n;

    data = (t_datas *)thread_data;
    x = data->start_x;
    while (x < data->end_x)
    {
        y = 0;
        n.r = (double)(x + data->fr->shift_x) / data->fr->scale;
        while (y < WINSIZEY)
        {
            n.i = (double)(y + data->fr->shift_x) / data->fr->scale;
            fr_color_mbrot(n, data->fr->pnt, data->fr, x, y);
            y++;
        }
        x++;
    }
    return (NULL);
}

void    *fr_thread_neuton(void *thread_data)
{
    t_datas *data;
    int		x;
    int		y;
    t_pnt	n;

    data = (t_datas *)thread_data;
    x = data->start_x;
    while (x < data->end_x)
    {
        y = 0;
        n.r = (double)(x + data->fr->shift_x) / data->fr->scale;
        while (y < WINSIZEY)
        {
            n.i = (double)(y + data->fr->shift_x) / data->fr->scale;
            fr_color_neuton(n, data->fr->pnt, data->fr, x, y);
            y++;
        }
        x++;
    }
    return (NULL);
}
