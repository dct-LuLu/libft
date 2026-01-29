/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_transform.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:23:11 by jaubry--          #+#    #+#             */
/*   Updated: 2026/01/29 22:23:58 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT3_TRANSFORM_H
# define MAT3_TRANSFORM_H

# include <math.h>
# include "matrices_types.h"

/*
	Matrix product (not component-wise).
*/
static inline t_mat3	mat3_mul(const t_mat3 a, const t_mat3 b)
{
	return ((t_mat3){.m = {
		{
			a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[1][0] + a.m[0][2] * b.m[2][0],
			a.m[0][0] * b.m[0][1] + a.m[0][1] * b.m[1][1] + a.m[0][2] * b.m[2][1],
			a.m[0][0] * b.m[0][2] + a.m[0][1] * b.m[1][2] + a.m[0][2] * b.m[2][2]
		},
		{
			a.m[1][0] * b.m[0][0] + a.m[1][1] * b.m[1][0] + a.m[1][2] * b.m[2][0],
			a.m[1][0] * b.m[0][1] + a.m[1][1] * b.m[1][1] + a.m[1][2] * b.m[2][1],
			a.m[1][0] * b.m[0][2] + a.m[1][1] * b.m[1][2] + a.m[1][2] * b.m[2][2]
		},
		{
			a.m[2][0] * b.m[0][0] + a.m[2][1] * b.m[1][0] + a.m[2][2] * b.m[2][0],
			a.m[2][0] * b.m[0][1] + a.m[2][1] * b.m[1][1] + a.m[2][2] * b.m[2][1],
			a.m[2][0] * b.m[0][2] + a.m[2][1] * b.m[1][2] + a.m[2][2] * b.m[2][2]
		}
	}});
}

static inline t_mat3	mat3_transpose(const t_mat3 a)
{
	return ((t_mat3){.m = {
		{a.m[0][0], a.m[1][0], a.m[2][0]},
		{a.m[0][1], a.m[1][1], a.m[2][1]},
		{a.m[0][2], a.m[1][2], a.m[2][2]}
	}});
}

static inline float	mat3_trace(const t_mat3 a)
{
	return (a.m[0][0] + a.m[1][1] + a.m[2][2]);
}

static inline float	mat3_det(const t_mat3 a)
{
	return (
		a.m[0][0] * (a.m[1][1] * a.m[2][2] - a.m[1][2] * a.m[2][1])
		- a.m[0][1] * (a.m[1][0] * a.m[2][2] - a.m[1][2] * a.m[2][0])
		+ a.m[0][2] * (a.m[1][0] * a.m[2][1] - a.m[1][1] * a.m[2][0])
	);
}

/*
	Inverse (returns zero matrix if not invertible).
*/
static inline t_mat3	mat3_inverse(const t_mat3 a)
{
	const float	det = mat3_det(a);
	t_mat3		r;

	if (det == 0.0f || !isfinite(det))
		return ((t_mat3){.m = {{0.f, 0.f, 0.f}, {0.f, 0.f, 0.f}, {0.f, 0.f, 0.f}}});
	r.m[0][0] =  (a.m[1][1] * a.m[2][2] - a.m[1][2] * a.m[2][1]) / det;
	r.m[0][1] = -(a.m[0][1] * a.m[2][2] - a.m[0][2] * a.m[2][1]) / det;
	r.m[0][2] =  (a.m[0][1] * a.m[1][2] - a.m[0][2] * a.m[1][1]) / det;
	r.m[1][0] = -(a.m[1][0] * a.m[2][2] - a.m[1][2] * a.m[2][0]) / det;
	r.m[1][1] =  (a.m[0][0] * a.m[2][2] - a.m[0][2] * a.m[2][0]) / det;
	r.m[1][2] = -(a.m[0][0] * a.m[1][2] - a.m[0][2] * a.m[1][0]) / det;
	r.m[2][0] =  (a.m[1][0] * a.m[2][1] - a.m[1][1] * a.m[2][0]) / det;
	r.m[2][1] = -(a.m[0][0] * a.m[2][1] - a.m[0][1] * a.m[2][0]) / det;
	r.m[2][2] =  (a.m[0][0] * a.m[1][1] - a.m[0][1] * a.m[1][0]) / det;
	return (r);
}

#endif//MAT3_TRANSFORM_H
