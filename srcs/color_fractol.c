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

void 	    fr_color_mbrot(t_pnt n, t_pnt s, t_fr *fr, int x, int y)
{
    int		i;
    t_pnt	tmp;
    int		*t;

    i = 0;
    while (i < fr->iter && ((n.r * n.r * 0.95 + n.i * n.i) <= 4))
    {
        tmp.r = n.r * n.r - n.i * n.i + s.r;
        tmp.i = 2 * n.r * n.i + s.i;
        n.r = tmp.r;
        n.i = tmp.i;
        i++;
    }
    t = (int*)fr->image;
    if (x >= 0 && x <= WINSIZEX && y >= 0 && y <= WINSIZEY)
        t[WINSIZEX * y + x] = fr->color[i];
}

void        fr_color_neuton(t_pnt n, t_pnt s, t_fr *fr, int x, int y)
{
    int     i;
    t_pnt   tmp;
    int     *t;

    i = 0;
    while (i < fr->iter && ((n.r * n.r * 0.95 + n.i * n.i) <= 4))
    {
        tmp.r = n.r * n.r - n.i * n.i - s.r;
        tmp.i = 2 * n.r * n.i - s.i;
        n.r = tmp.r;
        n.i = tmp.i;
        i++;
    }
    t = (int*)fr->image;
    if (x >= 0 && x <= WINSIZEX && y >= 0 && y <= WINSIZEY)
        t[WINSIZEX * y + x] = fr->color[i];
}
