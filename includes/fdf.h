/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorzhak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 14:16:49 by akorzhak          #+#    #+#             */
/*   Updated: 2018/02/18 14:16:51 by akorzhak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"
# include <stdio.h>
# include <fcntl.h> //(open)
# include <math.h>

# define SIZE_X 1700
# define SIZE_Y 1200

typedef struct		s_point
{
	double			x;
	double			y;
	double			z;
	double			nx;
	double 			ny;
	double			nz;
	struct s_point	*next;
}					t_point;

typedef struct		s_ptr
{
	int				fd;
	int				i;
	int				zoom;
	void			*mlx;
	void			*win;
	void			*img;
	int				bpp;
	int				size_line;
	int				end;
	int				color;
	int				size_x;
	int				size_y;
	char			*addr;
	double			x;
	double 			y;
	double			a;
	double			b;
	double			Lz;
	double 			Lx;
	char			perspective;
	t_point 		*point;
}					t_ptr;

typedef struct		s_dot
{
	double			x0;
	double			y0;
	double			x1;
	double			y1;
	int 			dx;
	int				dy;
	int				sx;
	int				sy;
	int				d;
	int				d1;
	int				d2;
}					t_dot;

void 		addPoint(t_point **point, t_point *new);
t_point		*createPoint(int x, int y, char *z);
void 		rotateMap(t_ptr *p);
void 		projectMap(t_ptr *p);
void		drawImage(t_ptr *p);

#endif

	// 