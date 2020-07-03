/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_fractol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void 	    fr_color_mbrot(t_pnt pnt, t_pnt s, t_fr *fr, int x, int y)
{
    int		i;
    t_pnt	tmp;
    int		*t;

    i = 0;
    while (i < fr->iter && (pnt.r * pnt.r * 0.95 + pnt.i * pnt.i <= 4))
    {
        tmp.r = pnt.r * pnt.r - pnt.i * pnt.i + s.r;
        tmp.i = 2 * pnt.r * pnt.i + s.i;
        pnt.r = tmp.r;
        pnt.i = tmp.i;
        i++;
    }
    t = (int*)fr->image;
    if (x >= 0 && x <= WINSIZEX && y >= 0 && y <= WINSIZEY)
        t[WINSIZEX * y + x] = fr->color[i];
}
