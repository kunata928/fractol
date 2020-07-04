/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_menu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		fr_info_static0(t_fr *fr)
{
	char *txt;

	mlx_string_put(fr->mlx, fr->win,
			WINSIZEX - 153, 5, TEXT_COL1, "Iterations:");
	txt = ft_itoa(fr->iter);
	mlx_string_put(fr->mlx, fr->win,
			WINSIZEX - 40, 5, TEXT_COL2, txt);
	free(txt);
	fr_info_static1(fr, txt);
//	fdf_info_help(fdf);
}

void		fr_info_static1(t_fr *fr, char *txt)
{
	//	mlx_string_put(fr->mlx, fr->win, 0, 0,
	//			TEXT_COL0, fr->map_name);
	mlx_string_put(fr->mlx, fr->win, 3, 18,
			TEXT_COL0, "Press <Esc> to exit");
    mlx_string_put(fr->mlx, fr->win, 3, 1,
                   TEXT_COL0, fr->contr.map);
	mlx_string_put(fr->mlx, fr->win,
				   WINSIZEX - 153, 23, TEXT_COL1, "Scale:");
	txt = ft_itoa(fr->scale);
	mlx_string_put(fr->mlx, fr->win,
				   WINSIZEX - 40, 23, TEXT_COL2, txt);
	free(txt);
}