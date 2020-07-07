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
void    set_color_bubble_gum(t_fr *fr)
{
    t_col	col;

    if (fr->iter > 5)
    {
        col.start = 0;
        col.end = fdf_doublebltoint(fr->iter / log2((double)fr->iter));//fr->iter / 4;
        set_color_bubble_gum1(fr, &col, BG2, BG7);
        col.start = col.end;//fr->iter / 4;
        col.end = fr->iter + 1;//fr->iter / 3;
        set_color_bubble_gum1(fr, &col, BG7, BG1);
//        col.start = 100;//fr->iter / 3;
//        col.end = 150;//fr->iter / 2;
//        set_color_bubble_gum1(fr, &col, BG3, BG4);
//        col.start = 150;//fr->iter / 2;
//        col.end = fr->iter + 1;//fr->iter / 1;
//        set_color_bubble_gum1(fr, &col, BG4, BG2);
    }
//    mid1 = fdf_doublebltoint(fr->iter / log2((double)fr->iter));
}

void    set_color_bubble_gum1(t_fr *fr, t_col *col, int cols, int cole)
{
    int		i;

    i = col->start;
    col->scol = cols;
    col->ecol = cole;
    while (i < col->end)
    {
        fr->col_bgum[i] = fr_color_pnt(col, i);
        i++;
    }
}

