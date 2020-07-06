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

void    zoom(t_fr *fr)
{
    int     i;
    int     x;
    int     y;

    i = 0;
    x = 150;
    y = 300;
    while (i < 50)
    {
        fr->scale *= 1.2;
        fr->shift_x = (int)(fr->shift_x * 1.2 + x * 0.2);
        fr->shift_y = (int)(fr->shift_y * 1.2 + y * 0.2);
        plot_image(fr);
        i++;
    }
    while (i < -1)
    {
        fr->scale /= 1.2;
        fr->shift_x = (int)(fr->shift_x / 1.2 - x * 0.1709);
        fr->shift_y = (int)(fr->shift_y / 1.2 - y * 0.1709);
        plot_image(fr);
        i--;
    }
}
