/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_jacobi_ops.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:25:13 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 22:25:50 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_JACOBI_OPS_H
# define MAT3_JACOBI_OPS_H

# include <math.h>
# include "matrices_types.h"
# include "vec2i_constructors.h"

typedef struct s_mat3_jacobi_rot
{
	t_mat3_pivot	p;     /* p.x = k, p.y = l */
	float			amax;  /* |a[k][l]| */
	float			t;
	float			s;
	float			tau;
}	t_mat3_jacobi_rot;

/*
	Finds pivot (k,l) = biggest off-diagonal magnitude among (0,1),(0,2),(1,2).
*/
static inline t_mat3_pivot	mat3_jacobi_pivot(const t_mat3 a)
{
	t_mat3_pivot	p;
	float			best;

	p = vec2i(0, 1);
	best = fabsf(a.m[0][1]);
	if (fabsf(a.m[0][2]) > best)
	{
		best = fabsf(a.m[0][2]);
		p = vec2i(0, 2);
	}
	if (fabsf(a.m[1][2]) > best)
		p = vec2i(1, 2);
	return (p);
}

static inline float	mat3_jacobi_t(const float diff, const float a_kl)
{
	float	phi;
	float	t;

	if (fabsf(a_kl) < fabsf(diff) * 1.0e-36f)
		return (a_kl / diff);
	phi = diff / (2.0f * a_kl);
	t = 1.0f / (fabsf(phi) + sqrtf(phi * phi + 1.0f));
	if (phi < 0.0f)
		t = -t;
	return (t);
}

/*
	Builds (t,s,tau) + pivot + amax from current matrix.
*/
static inline t_mat3_jacobi_rot	mat3_jacobi_rot(const t_mat3 a)
{
	t_mat3_jacobi_rot	r;
	float				c;
	float				diff;

	r.p = mat3_jacobi_pivot(a);
	r.amax = fabsf(a.m[r.p.x][r.p.y]);
	diff = a.m[r.p.y][r.p.y] - a.m[r.p.x][r.p.x];
	r.t = mat3_jacobi_t(diff, a.m[r.p.x][r.p.y]);
	c = 1.0f / sqrtf(r.t * r.t + 1.0f);
	r.s = r.t * c;
	r.tau = r.s / (1.0f + c);
	return (r);
}

/*
	Applies one Jacobi rotation to:
	- a: symmetric matrix being diagonalized
	- p: eigenvector accumulator
*/
static inline void	mat3_jacobi_apply(t_mat3 *a, t_mat3 *p,
	const t_mat3_jacobi_rot r)
{
	int		i;
	float	x;
	float	y;

	x = a->m[r.p.x][r.p.y];
	a->m[r.p.x][r.p.y] = 0.0f;
	a->m[r.p.y][r.p.x] = 0.0f;
	a->m[r.p.x][r.p.x] -= r.t * x;
	a->m[r.p.y][r.p.y] += r.t * x;
	i = 0;
	while (i < 3)
	{
		if (i != r.p.x && i != r.p.y)
		{
			x = a->m[i][r.p.x];
			y = a->m[i][r.p.y];
			a->m[i][r.p.x] = x - r.s * (y + r.tau * x);
			a->m[i][r.p.y] = y + r.s * (x - r.tau * y);
			a->m[r.p.x][i] = a->m[i][r.p.x];
			a->m[r.p.y][i] = a->m[i][r.p.y];
		}
		i++;
	}
	i = 0;
	while (i < 3)
	{
		x = p->m[i][r.p.x];
		y = p->m[i][r.p.y];
		p->m[i][r.p.x] = x - r.s * (y + r.tau * x);
		p->m[i][r.p.y] = y + r.s * (x - r.tau * y);
		i++;
	}
}

#endif//MAT3_JACOBI_OPS_H
