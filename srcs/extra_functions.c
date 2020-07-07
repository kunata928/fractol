/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void    move_to_center(t_fr *fr)
{
    fr->shift_x = -WINSIZEX / 2;
    fr->shift_y = -WINSIZEY / 2;
    fr->scale = 200;
    plot_image(fr);
}

void    moving_image(t_fr *fr)
{
    if (fr->contr.start_move == 0)
        fr->contr.start_move = 1;
    else
        fr->contr.start_move = 0;
    plot_image(fr);
}

void    change_color(t_fr *fr)
{
    fr->contr.bg = !(fr->contr.bg);
    plot_image(fr);
}
