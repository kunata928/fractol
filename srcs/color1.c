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

    col.start = 0;
    col.end = fdf_doublebltoint(fr->iter / (log2((double)fr->iter) + 1));
    set_color_bubble_gum1(fr, &col, BG2, BG7);
    col.start = col.end;
    col.end = fr->iter + 1;
    set_color_bubble_gum1(fr, &col, BG7, BG1);
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

