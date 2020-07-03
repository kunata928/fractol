/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:04:39 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:04:54 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <pthread.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <stdlib.h>
# include "../includes/mlx.h"
# include "../libft/includes/libft.h"

# define WHITE				0xFFFFFF
# define BLACK				0x000000
# define WINE				0xAB271D
# define ROSE				0x6D3445
# define STRONG_ROSE		0x9D788F
# define DEF_COL			0xC488AC
# define TEXT_COL0			0x9D828F
# define TEXT_COL1			0xAF6C93
# define TEXT_COL2			0xD54E94

# define JULIA              0
# define MANDELBROT         1
# define RANDOM             2

# define GELB				0xF3D476
# define ROT				0x622C40
# define BLAU				0x06062C

# define WINSIZEX			700
# define WINSIZEY			700
# define MAX_ITERATION		255
# define D_SCALE			1.15
# define THREADS            3

# define TRUE				1
# define FALSE				0
# define MOUSE_SCROLL_UP	4
# define MOUSE_SCROLL_DOWN	5
# define MOUSE_BUTTON_MID	3
# define MOUSE_LEFT_BUTTON	1
# define MOUSE_RIGHT_BUTTON	2
# define KEY_ESC			53
# define KEY_CTRL_LEFT		256
# define KEY_SHIFT_LEFT		257
# define KEY_F				3
# define KEY_H				4
# define KEY_S				1
# define KEY_Z				6
# define KEY_X				7
# define KEY_I				34
# define KEY_T				17
# define KEY_E				14
# define KEY_R				15
# define KEY_G				5
# define KEY_B				11
# define KEY_Q				12
# define KEY_W				13
# define KEY_J				38
# define KEY_M				46
# define KEY_SPACE			49
# define KEY_PLUS			24
# define KEY_MINUS			27
# define KEY_NUM_1			83
# define KEY_NUM_2			84
# define KEY_NUM_3			85
# define KEY_NUM_4			86
# define KEY_NUM_6			88
# define KEY_NUM_7			89
# define KEY_NUM_8			91
# define KEY_NUM_9			92
# define KEY_NUM_UP			126
# define KEY_NUM_DOWN		125
# define KEY_NUM_LEFT		123
# define KEY_NUM_RIGHT		124

typedef struct		s_contr
{
	int				left_button;
	int				shift;
	int				cntrl;
	int				help;
	int				map;
	int				prev_x;
	int				prev_y;
}					t_contr;

typedef struct		s_pnt
{
	double			r;
	double			i;
}					t_pnt;

typedef struct		s_col
{
	int				start;
	int				end;
	int				scol;
	int				ecol;
	int				cur;
}					t_col;

typedef struct		s_fr
{
	t_contr			contr;
	t_pnt			pnt;
	t_pnt			current;
	t_pnt			prev_center;

	void			*mlx;
	void			*win;
	void			*img_ptr;
	char			*image;
	int				bpp;
	int				s_line;
	int				endian;
	int 			name;
	int				*color;

	int				iter;
	double			scale;
	double			scale_shift_x;
	double			scale_shift_y;
	int				shift_x;
	int				shift_y;
	double			k;
	
}					t_fr;

typedef struct      s_datas
{
    int             start_x;
    int             end_x;
    t_fr            *fr;
}                   t_datas;

int					fr_key_press(int keycode, t_fr *fr);

void				fr_init(t_fr *fr);
void				fr_change_map(t_fr *fr, int key);
int					fr_read_consol(int ac, char **av, t_fr *fr);
char				*fr_name_map(t_fr *fr);

void				fr_not_valid_imput(void);
int					fr_close(void *param);

int					fr_mouse_check(int button, int x, int y, t_fr *fr);
int					fr_mouse_press(int button, int x, int y, t_fr *fr);
int					fr_mouse_move(int x, int y, t_fr *fr);

void				fr_scale_image(t_fr *fr, int keycode, int x, int y);
void            	fr_change_iter(t_fr *fr, int keycode);

void                plot_image(t_fr *fr);
void				*fr_thread_mandelbrot(void *thread_data);
void                *fr_thread_julia(void *thread_data);

void				fr_set_color(t_fr *fr);

void				fr_info_static0(t_fr *fr);
void				fr_info_static1(t_fr *fr, char *txt);

void			    fr_evaluate(t_fr *fr);
void			    fr_thread_selection(int i, t_datas *data, pthread_t *threads);

void            	fr_color_mbrot(t_pnt pnt, t_pnt s, t_fr *fr, int x, int y);
#endif
