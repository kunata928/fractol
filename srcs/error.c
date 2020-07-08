/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		fr_error(void)
{
	ft_putstr("error");
	exit(1);
}

void		fr_not_valid_imput(void)
{
	ft_putstr("Not valid input,\nplease write: <m> for Mandelbrot\n          "
           "    <j> for Julia\n              <n> for Natali");
	exit(1);
}

int		fr_close(void *param)
{
	(void)param;
	exit(0);
	return (0);
}
