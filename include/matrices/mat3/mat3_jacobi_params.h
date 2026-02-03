/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_jacobi_params.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:10:53 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/03 01:05:25 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_JACOBI_PARAMS_H
# define MAT3_JACOBI_PARAMS_H

# include <math.h>
# include "matrices_types.h"
# include "mat3_accessors.h"
# include "vec2i_constructors.h"

/*
	Jacobi rotation parameters for symmetric eigensolver:
		(k,l) is the pivot pair,
		(t,s,tau) encode a stable plane rotation.
*/
typedef struct s_jacobi_rot_params
{
	t_mat3_pivot	p;		/* p.x = k, p.y = l */
	float			amax;	/* |a[k][l]| */
	float			t;
	float			s;
	float			tau;
}					t_jacobi_rot_params;

/*
	Finds pivot (k,l) = biggest off-diagonal magnitude among (0,1),(0,2),(1,2).
*/
static inline t_mat3_pivot	get_mat3_jacobi_pivot(const t_mat3 a)
{
	t_mat3_pivot	p;
	float			best;
	float			v;

	p = vec2i(0, 1);
	best = fabsf(a.m[0][1]);
	v = fabsf(a.m[0][2]);
	if (v > best)
	{
		best = v;
		p = vec2i(0, 2);
	}
	v = fabsf(a.m[1][2]);
	if (v > best)
		p = vec2i(1, 2);
	return (p);
}

/*
	Computes Jacobi parameter t from diff = a_ll - a_kk and a_kl
	(stable formula used to define the plane rotation)
*/
static inline float	get_mat3_jacobi_t(const float diff, const float a_kl)
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
	Builds a full Jacobi rotation descriptor from the
	current symmetric matrix: pivot + amax + (t,s,tau)
*/
static inline t_jacobi_rot_params	get_mat3_jacobi_rot_params(const t_mat3 a)
{
	t_jacobi_rot_params	r;
	float				c;
	float				diff;

	r.p = get_mat3_jacobi_pivot(a);
	r.amax = fabsf(a.m[r.p.x][r.p.y]);
	diff = a.m[r.p.y][r.p.y] - a.m[r.p.x][r.p.x];
	r.t = get_mat3_jacobi_t(diff, a.m[r.p.x][r.p.y]);
	c = 1.0f / sqrtf(r.t * r.t + 1.0f);
	r.s = r.t * c;
	r.tau = r.s / (1.0f + c);
	return (r);
}

#endif//MAT3_JACOBI_PARAMS_H
