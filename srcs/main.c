/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		main(int argc, char **argv)
{
	t_fr fr;

	fr.mlx = mlx_init();
	if (fr_read_consol(argc, argv, &fr))
		fr_not_valid_imput();
	mlx_hook(fr.win, 17, 0, fr_close, 0);
	mlx_hook(fr.win, 2, 0, fr_key_press, fr);
	mlx_loop(fr.mlx);
	return (0);
}
