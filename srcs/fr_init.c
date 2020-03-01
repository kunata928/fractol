/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int			fr_init_map(char *map, t_fr *fr)
{
	if (ft_strlen(map) == 1)
	{
		if (*map == 'M' || *map == 'm')
			fr->contr.map = 1;
		else if (*map == 'J' || *map == 'j')
			fr->contr.map = 2;
		else
			return (1);
	}
	else
	{
		if (ft_strequ(map, "Mandelbrot") || ft_strequ(map, "mandelbrot"))
			fr->contr.map = 1;
		else if (ft_strequ(map, "Julia") || ft_strequ(map, "julia"))
			fr->contr.map = 2;
		else
			return (1);
	}
	return (0);
}

int			fr_read_consol(int ac, char **av, t_fr *fr)
{
	if (ac == 1)
		fr->contr.map = 2;
	else if (ac == 2)
		return (fr_init_map(av[1], fr));
	else
		return (1);
	return (0);
}
