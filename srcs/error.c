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
	ft_putstr("not valid input, please write <m> or <j>");
	exit(1);
}

int		fr_close(void *param)
{
	(void)param;
	exit(0);
	return (0);
}
