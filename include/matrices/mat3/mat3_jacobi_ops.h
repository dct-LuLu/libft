/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_jacobi_ops.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:25:13 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/02 23:17:00 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_JACOBI_OPS_H
# define MAT3_JACOBI_OPS_H

# include "mat3_jacobi_params.h"

/*
	Applies the 2D Jacobi “plane rotation” update to a pair (x,y),
	used to rotate two coupled coefficients consistently.
*/
static inline void	mat3_jacobi_rot2f(float *x, float *y,
	const t_jacobi_rot_params *r)
{
	float	x0;
	float	y0;

	x0 = *x;
	y0 = *y;
	*x = x0 - r->s * (y0 + r->tau * x0);
	*y = y0 + r->s * (x0 - r->tau * y0);
}

/*
	Updates matrix A for one index i (i != k,l): rotates (A[i][k], A[i][l])
	and writes back symmetrically to keep A symmetric.
*/
static inline void	mat3_jacobi_apply_a_index(t_mat3 *a,
	const t_jacobi_rot_params *r, const int i)
{
	const int	k = r->p.x;
	const int	l = r->p.y;
	float		x;
	float		y;

	x = a->m[i][k];
	y = a->m[i][l];
	mat3_jacobi_rot2f(&x, &y, r);
	mat3_set_sym(a, i, k, x);
	mat3_set_sym(a, i, l, y);
}

/*
	Updates eigenvector accumulator P for one row i:
	rotates the two columns (k,l) so P accumulates the total rotation.
*/
static inline void	mat3_jacobi_apply_p_index(t_mat3 *p,
	const t_jacobi_rot_params *r, const int i)
{
	const int	k = r->p.x;
	const int	l = r->p.y;
	float		x;
	float		y;

	x = p->m[i][k];
	y = p->m[i][l];
	mat3_jacobi_rot2f(&x, &y, r);
	p->m[i][k] = x;
	p->m[i][l] = y;
}

/*
	Applies one Jacobi step: 
		zeros A[k][l],
		adjusts diagonals,
		updates the rest of rows/cols (k,l),
		and rotates P the same way
*/
static inline void	mat3_jacobi_apply(t_mat3 *a, t_mat3 *p,
	const t_jacobi_rot_params r)
{
	int		i;
	float	apq;

	apq = a->m[r.p.x][r.p.y];
	mat3_set_sym(a, r.p.x, r.p.y, 0.0f);
	a->m[r.p.x][r.p.x] = a->m[r.p.x][r.p.x] - r.t * apq;
	a->m[r.p.y][r.p.y] = a->m[r.p.y][r.p.y] + r.t * apq;
	i = 0;
	while (i < 3)
	{
		if (i != r.p.x && i != r.p.y)
			mat3_jacobi_apply_a_index(a, &r, i);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		mat3_jacobi_apply_p_index(p, &r, i);
		i++;
	}
}

#endif//MAT3_JACOBI_OPS_H
