/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

double		percent(int start, int end, double curr)
{
	double placement;
	double distanse;

	placement = curr - start;
	distanse = end - start;
	return ((distanse == 0) ? 1.0 : (placement / distanse));
}

int			get_light(double start, double end, double percent)
{
	return ((int)((1 - percent) * start + percent * end));
}

int			fr_color_pnt(t_col *col, int cur)
{
	int		red;
	int		green;
	int		blue;
	double	percentage;

	if (cur == col->start)
		return (col->scol);
	if (cur == col->end)
		return (col->ecol);
	percentage = percent(col->start, col->end, cur);
	red = get_light((col->scol >> 16) & 0xFF,
			(col->ecol >> 16) & 0xFF, percentage);
	green = get_light((col->scol >> 8) & 0xFF,
			(col->ecol >> 8) & 0xFF, percentage);
	blue = get_light(col->scol & 0xFF,
			col->ecol & 0xFF, percentage);
	return ((red << 16) | (green << 8) | blue);
}

double	fdf_doublebltoint(double nbr)
{
	if (nbr >= 0)
	{
		if (nbr - (int)nbr >= 0.5)
			return ((int)nbr + 1);
		else
			return ((int)nbr);
	}
	else
	{
		if (fabs(nbr) - abs((int)nbr) >= 0.5)
			return ((int)nbr - 1);
		else
			return ((int)nbr);
	}
}


void		fr_set_color(t_fr *fr)
{
	int		i;
	t_col	col;
	int		mid;

	i = 0;
    mid = fdf_doublebltoint(fr->iter / log2((double)fr->iter));
	col.start = 0;
	col.end = mid;
	col.scol = GELB;
	col.ecol = ROT;
	while (i < mid)
	{
		fr->color[i] = fr_color_pnt(&col, i);
		i++;
	}
	col.start = i;
	col.end = fr->iter;
	col.scol = ROT;
	col.ecol = BLAU;
	while (i < fr->iter + 1)
	{
		fr->color[i] = fr_color_pnt(&col, i);
		i++;
	}
}
