/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_thread.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void			fr_evaluate(t_fr *fr)
{
    int			i;
    pthread_t	*threads;
    t_datas		*data;

    threads = (pthread_t*)malloc(sizeof(pthread_t) * THREADS);
    data = (t_datas*)malloc(sizeof(t_datas) * THREADS);
    i = 0;
    while (i < THREADS)
    {
        data[i].fr = fr;
        fr_thread_selection(i, data, threads);
        i++;
    }
    i = 0;
    while (i < THREADS)
    {
        pthread_join(threads[i], NULL);
        i++;
    }
    free(threads);
    free(data);
}

void			fr_thread_selection(int i, t_datas *data, pthread_t *threads)
{
    data[i].start_x = WINSIZEX / THREADS * i;

    if (i == THREADS - 1)
        data[i].end_x = WINSIZEX;
    else
        data[i].end_x = WINSIZEX / THREADS * (i + 1);
    if (data->fr->name == MANDELBROT)
        pthread_create(&(threads[i]), NULL, fr_thread_mandelbrot, &data[i]);
    else if (data->fr->name == JULIA)
        pthread_create(&(threads[i]), NULL, fr_thread_julia, &data[i]);
    }